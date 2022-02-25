//터치모듈 버튼모듈로 led색상 변경 
int a=0;
int b=a+1;


void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  

}

void loop() {
  if(digitalRead(7)==HIGH){
    a++;
    delay(200);
    }
  if(digitalRead(8)==HIGH){
    a--;
    delay(200);
    }
  
  Serial.println(a);
  if(a==1){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    }
  if(a==2){
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    }
  if(a==3){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    }
  if(a==4){
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    }
  if(a==5){
    a=1;
    }
  if(a==0){
    a=4;
    }
  

  
    }
