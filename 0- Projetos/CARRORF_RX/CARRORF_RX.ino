#include <RCSwitch.h>

int dir=9, esq=10;
RCSwitch mySwitch = RCSwitch();

void setup(){
  Serial.begin(9600);
  pinMode(dir, OUTPUT);
  pinMode(esq, OUTPUT);
  mySwitch.enableReceive(0);  //-----> PINO #D2
}

void loop(){
  if (mySwitch.available()>0){
  int val = mySwitch.getReceivedValue();
  Serial.print("Received ");
  Serial.println( mySwitch.getReceivedValue() );
  if (val >= 11 && val <= 111){analogWrite(12,val);}
  if (val == 10){digitalWrite(esq, 1);}
  if (val == 01){digitalWrite(dir, 1);} 
 }
mySwitch.resetAvailable();
}

void esquerda(){
}
void direita(){
}
  
