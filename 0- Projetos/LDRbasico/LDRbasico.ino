int sensor = 0;      //Pino analógico em que o sensor está conectado.
int valorSensor = 0; //variável usada para ler o valor do sensor em tempo real.

void setup(){
  //Ativando o serial monitor que exibirá os valores lidos no sensor.
  Serial.begin(9600);
}

void loop(){
  
  //Lendo o valor do sensor.
  int valorSensor = analogRead(sensor);
  
  //Exibindo o valor do sensor no serial monitor.
  Serial.println(valorSensor);
  
  delay(500); 
}
