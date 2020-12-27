int bot1=13, led=12;

void setup(){
  Serial.begin(9600);
  Serial.println("Leitura -----------------------");
  pinMode(bot1, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
    
}
  
void loop(){
  
  int vbot1 = digitalRead(bot1);
  int vled = digitalRead (led);
  Serial.write("Botao ->");Serial.println(vbot1);
  Serial.write("Led   ->");Serial.println(vled);
  Serial.println(" ");
  
  switch (vbot1){
  case HIGH:
  vled=!(vled);
  break;
  case LOW:
  vled = (vled);
  break;
}
   digitalWrite(led, vled);
   delay(300);
  }    
