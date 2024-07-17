#include<dht.h>
int Pin=2;
dht DHT;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  DHT.read22(Pin);
  Serial.print("Celsius Temp : ");
  Serial.print(DHT.temperature,1);
  Serial.println("*C");
  delay(1000);
}
