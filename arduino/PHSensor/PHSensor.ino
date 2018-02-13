#include <SoftwareSerial.h>
#define rx 2
#define tx 3 

SoftwareSerial myserial(rx, tx); 

String inputstring = "";
String sensorstring = "";
boolean input_stringcomplete = false;
boolean sensor_stringcomplete = false;
float ph; 

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  myserial.begin(9600);
  inputstring.reserve(10);
  sensorstring.reserve(30);
}

void serialEvent() {
  char inchar = (char)Serial.read();
  inputstring += inchar;
  if (inchar == '\r') {
    input_stringcomplete = true;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
   if (input_stringcomplete) {
   myserial.print(inputstring);
  inputstring = "";
  input_stringcomplete = false;
  }
  if (myserial.available() > 0) {
    char inchar = (char)myserial.read();
    sensorstring += inchar;
    if (inchar == '\r') {
      sensor_stringcomplete = true;
    }
  }
   if (sensor_stringcomplete) {
  Serial.println(sensorstring);
  ph = sensorstring.toFloat();
  if (ph >= 7.0) {
    Serial.println("high");
  }
  if (ph <= 6.999) {
    Serial.println("low");
  }
  sensorstring = "";
  sensor_stringcomplete = false;
 }
}




