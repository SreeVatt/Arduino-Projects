int trigPin=7;
int echoPin=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin,OUTPUT);
Serial.begin(9600);
}
void loop()
{
long duration, distance;
digitalWrite(trigPin,LOW); 
delayMicroseconds(2); 
digitalWrite(trigPin, HIGH); 
delayMicroseconds(10); 
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH); 
distance = (duration/2) /29.41; 
if(distance >= 200 || distance <= 0)
{
Serial.println("Out of range");
}
else { Serial.print(distance); 
Serial.println("cm");
}
delay(500);
}
