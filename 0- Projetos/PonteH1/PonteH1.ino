// Ponte H com controle

int portaH1 = 7;
int portaH2 = 6;
int potpin = 0;  
int val; 
int val1; 
int val2;
 
void setup(){
} 
void loop(){ 
  val = analogRead(potpin);            
  val1 = map(val, 0, 519, 255, 0);     
  val2 = map(val, 520, 1023, 0, 255);
  if (val > 520) val1 = 0;
  else val2 = 0;
  analogWrite(portaH1, val1);
  analogWrite(portaH2, val2);  
}
