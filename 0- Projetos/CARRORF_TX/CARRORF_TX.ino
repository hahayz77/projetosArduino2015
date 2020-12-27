#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

int botesq, botdir, acel;

void setup(){
  pinMode(botesq, INPUT);
  pinMode(botdir, INPUT);
  mySwitch.enableTransmit(10);
}

void loop(){
  int valesq = digitalRead(botesq);
  int valdir = digitalRead(botdir);
  int valpot = analogRead(acel);
  int val = map(valpot, 0, 1023, 11, 111);
  mySwitch.send(val, 24);
  if (valesq != 0) {mySwitch.send(10,24);}
  if (valdir != 0) {mySwitch.send(01,24);}
}
