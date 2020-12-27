#include <Servo.h>
Servo myservo1, myservo2, myservo3, myservo4;
int potpin1 = 1, potpin2 = 2, potpin3 = 3;
int val1, val2, val3, val4, val =0, dif =0;  

void setup(){
 myservo1.attach(3); myservo2.attach(4); myservo3.attach(5); myservo4.attach(6);
}
void loop(){
 val1 = analogRead(potpin1); 
 val2 = analogRead(potpin2);
 val3 = analogRead(potpin3); val4 = analogRead(potpin3);
 softservo(1);softservo(2);softservo(3);softservo(4);
}

void softservo (int servo){ 
  if (servo == 1){
  val = analogRead(potpin1); dif = val1 - val; 
  val = map(val1, 0, 1023, 70, 130); if (dif > 5 || dif < 5){myservo1.write(val);}
  }
  if (servo == 2){ 
  val = analogRead(potpin2); dif = val2 - val; 
  val = map(val2, 0, 1023, 90, 179); if (dif > 5 || dif < 5){myservo2.write(val);}
  }
  if (servo == 3){ 
  val = analogRead(potpin3); dif = val3 - val; 
  val = map(val3, 0, 1023, 0, 89); if (dif > 5 || dif < 5){myservo3.write(val);}
  }
  if (servo == 4){ 
  val = analogRead(potpin3); dif = val4 - val; 
  val = map(val4, 0, 1023, 179, 90); if (dif > 5 || dif < 5){myservo4.write(val);}
  }
}
