//softwareserial을 사용해 디지털 윙에 글자 출력
#include <SoftwareSerial.h>
SoftwareSerial mybt(2,3);
void setup() {
  mybt.begin(9600);
  Serial.begin(9600);
  

}

void loop() {
  if(Serial.available()>0){
    mybt.write(Serial.read());
    }
  if(mybt.available() > 0){
    Serial.write((mybt.read()));
    
    
    }
   
  

}
