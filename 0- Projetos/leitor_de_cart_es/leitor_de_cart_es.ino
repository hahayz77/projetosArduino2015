int led=13, anlg1=0, anlg2=1, anlg3=2;
void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
  
void loop(){
  byte val2 = Serial.read();
  do {Serial.println(val2);}
  while (val2 =! -1);
}
