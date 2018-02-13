#define RELAY_ON 0 
#define RELAY_OFF 1

#define RELAY_1 12 
#define RELAY_2 11 
#define RELAY_3 10 
#define RELAY_4 9 
#define RELAY_5 8 
#define RELAY_6 7 
#define RELAY_7 6 
#define RELAY_8 5 


void setup() {
  // put your setup code here, to run once:
  digitalWrite(RELAY_1, RELAY_OFF);
  digitalWrite(RELAY_2, RELAY_OFF);
  digitalWrite(RELAY_3, RELAY_OFF);
  digitalWrite(RELAY_4, RELAY_OFF);
  digitalWrite(RELAY_5, RELAY_OFF);
  digitalWrite(RELAY_6, RELAY_OFF);
  digitalWrite(RELAY_7, RELAY_OFF);
  digitalWrite(RELAY_8, RELAY_OFF);

  pinMode(RELAY_1, OUTPUT);
  pinMode(RELAY_2, OUTPUT);
  pinMode(RELAY_3, OUTPUT);
  pinMode(RELAY_4, OUTPUT);
  pinMode(RELAY_5, OUTPUT);
  pinMode(RELAY_6, OUTPUT);
  pinMode(RELAY_7, OUTPUT);
  pinMode(RELAY_8, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RELAY_1, RELAY_ON); 
  delay(1000); 
  digitalWrite(RELAY_1, RELAY_OFF); 
  delay(1000); 


  

}
