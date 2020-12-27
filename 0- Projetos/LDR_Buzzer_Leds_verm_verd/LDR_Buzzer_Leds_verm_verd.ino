int buzzer=7, sensor=0, valorsensor=0, ledb=6;

void setup(){
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(ledb,OUTPUT);
  Serial.println("Leitura sensor LDR:");
  
}

void loop(){
  digitalWrite(ledb, LOW);
  int valorsensor = analogRead(sensor);
  Serial.println(valorsensor);
  delay (500);
  
  if (valorsensor < 100){
    digitalWrite(ledb, LOW);
    tone (buzzer,1000);
    delay(500);
    noTone(buzzer);
    delay(100);
  }
  else {
    noTone(buzzer);
    digitalWrite(ledb, HIGH);
    delay(500);
  }
  
}
