#include <SoftwareSerial.h>
SoftwareSerial mybt(2,3);
void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT_PULLUP);
  mybt.begin(9600);
  
  

}

void loop() {
  int a = analogRead(A0); 
  a = map(a,0,1023,0,255);
  mybt.write(a);
  delay(1000);
  
  
  
  
  

}
