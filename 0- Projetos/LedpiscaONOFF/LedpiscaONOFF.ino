int led=12, vled = digitalRead(led);

void setup(){
  Serial.begin(9600);
  pinMode (led, OUTPUT);  
  digitalWrite(led, HIGH);
  Serial.println("Valor do LED----------");
}
void loop(){
  Serial.print("Valor do LED:");
  switch(vled){
  case 1:
  Serial.println("ON");
  break;
  case 0:
  Serial.println("OFF");
  break;}
  digitalWrite(led,vled);
  delay(1000);
  vled=!(vled);
}
