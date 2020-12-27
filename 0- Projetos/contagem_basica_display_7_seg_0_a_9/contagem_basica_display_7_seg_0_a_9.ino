byte disp[10][7] = { 
{ 0,0,0,0,0,0,1 },  // = 0
{ 1,0,0,1,1,1,1 },  // = 1
{ 0,0,1,0,0,1,0 },  // = 2
{ 0,0,0,0,1,1,0 },  // = 3
{ 1,0,0,1,1,0,0 },  // = 4
{ 0,1,0,0,1,0,0 },  // = 5
{ 0,1,0,0,0,0,0 },  // = 6
{ 0,0,0,1,1,1,1 },  // = 7
{ 0,0,0,0,0,0,0 },  // = 8
{ 0,0,0,1,1,0,0 }   // = 9
};


void setup() {                
  
pinMode(31, OUTPUT);//pino a  
pinMode(32, OUTPUT);//pino b
pinMode(33, OUTPUT);//pino c
pinMode(34, OUTPUT);//pino d
pinMode(35, OUTPUT);//pino e
pinMode(36, OUTPUT);//pino f
pinMode(37, OUTPUT);//pino g
pinMode(38, OUTPUT);//pino ponto
digitalWrite(38, LOW);  // Inicia com o ponto desligado




void loop() {
  // 0 ------------------
  digitalWrite (disp[1][7], HIGH);
  delay(1000);
  digitalWrite (disp[1][7], LOW); 
  // 1 ------------------
  digitalWrite (disp[2][7], HIGH);
  delay(1000); 
  digitalWrite (disp[2][7], LOW);
  // 2 ------------------
  digitalWrite (disp[3][7], HIGH);
  delay(1000); 
  digitalWrite (disp[3][7], LOW);
 /*
  // 3 ------------------
  disp[4][7];
  delay(1000); 
  // 4 ------------------
  disp[5][7];
  delay(1000); 
  // 5 ------------------
    
  // 6 ------------------
  
  // 7 ------------------
     
  // 8 ------------------
  
  // 9 ------------------
 */    
}
