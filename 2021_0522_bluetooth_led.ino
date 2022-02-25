#include <SoftwareSerial.h>
SoftwareSerial mybluetooth(9,8);//(TX,RX)

void setup(){ 
mybluetooth.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
}



void loop(){
char a = mybluetooth.read();
if(a == 'p'){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  }
if(a == 'q'){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  }

}
