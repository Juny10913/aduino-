//사이렌
void setup() {
  pinMode(6,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
  

}

void loop() {
  if(digitalRead(8)==HIGH){
    digitalWrite(13,HIGH);
    tone(6,659);
    delay(1000);
    digitalWrite(13,LOW);
    tone(6,523);
    delay(1000);
    digitalWrite(13,HIGH);
    tone(6,659);
    delay(1000);
    digitalWrite(13,LOW);
    tone(6,523);
    delay(1000);
    digitalWrite(13,HIGH);
    tone(6,659);
    delay(1000);
    digitalWrite(13,LOW);
    tone(6,523);
    delay(1000);
    digitalWrite(13,HIGH);
    tone(6,659);
    delay(1000);
    digitalWrite(13,LOW);
    tone(6,523);
    delay(1000);
    digitalWrite(13,HIGH);
    tone(6,659);
    delay(1000);
    digitalWrite(13,LOW);
    tone(6,523);
    
  
    
    
    }
  
  

}
