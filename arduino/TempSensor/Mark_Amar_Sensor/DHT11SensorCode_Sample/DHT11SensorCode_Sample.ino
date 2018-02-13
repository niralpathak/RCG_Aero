#include <dht.h>

dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("S1.Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("S1.Humidity = ");
  Serial.println(DHT.humidity);
  delay(3000);
}
