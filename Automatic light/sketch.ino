#define LAMP  8  // choose the pin for the RELAY
#define PIR 13   // choose the input pin (for PIR sensor)                 
void setup()
{    
Serial.begin(9600);
  pinMode(LAMP, OUTPUT); // declare lamp as output
  pinMode(PIR,INPUT); // declare sensor as input     
}                                                                                                                  
void loop() 
{
  
  
  int value_ldr = analogRead(A4); // read LDR value
  int value_pir = digitalRead(PIR); // read input value
  Serial.println(value_ldr);
  Serial.println(value_pir);

 if((300>value_ldr) && ( value_pir==HIGH) ){
       digitalWrite(LAMP,1);  // Turn ON the light
       delay(6000);
       
 
}
else {
  
       digitalWrite(LAMP,0); // Turn OFF the light
       
}
 }

