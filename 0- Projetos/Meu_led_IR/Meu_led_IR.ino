int red = 7;
int blue = 6;
int sensor = 8;
int leitura;

void setup(){
  pinMode (red, OUTPUT);
  pinMode (blue, OUTPUT);
  pinMode (sensor, INPUT);
  digitalWrite (red, 1);
  digitalWrite (blue, 0);
}

void loop()
{
  leitura = digitalRead(sensor);
  if (leitura != 1)
  {
  while(digitalRead(sensor) != 1)
 {
   delay(100);
 }
  
 digitalWrite(red, 0);
 digitalWrite(blue, 1);
   }
}
