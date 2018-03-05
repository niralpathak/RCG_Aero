void setup() {
      Serial.begin(9600);
}

void loop() {
int sensorVal=analogRead(A1);
Serial.print("Sensor Value: ");
Serial.print(sensorVal);

float voltage = (sensorVal*5.0)/1024.0;
      Serial.print(", Volts: ");
      Serial.print(voltage);

  float pressure_pascal = (3.0*((float)voltage-0.47))*1000.0;
  float pressure_psi = pressure_pascal/6.894757;
      Serial.print(", Pressure =");
      Serial.print(pressure_psi);
      Serial.print(" psi");
      Serial.print('\n');

      delay(100);
}
