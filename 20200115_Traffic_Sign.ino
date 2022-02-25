//신호등
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(10,OUTPUT);
 
 

}

void loop() {
  digitalWrite(13,HIGH);
  delay(5000);
  digitalWrite(13,LOW);
  digitalWrite(10,HIGH);
  delay(5000);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  delay(500);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  delay(500);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  delay(500);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  delay(500);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  delay(500);
  
  

}
