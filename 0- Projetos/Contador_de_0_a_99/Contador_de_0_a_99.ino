int a, b, c, d, e, f, g, p;

void setup() 
{  
  pinMode(a, OUTPUT),(b, OUTPUT),(c, OUTPUT),(d, OUTPUT),(e, OUTPUT),(f, OUTPUT),(g, OUTPUT),(p, OUTPUT); 
  writePonto1(0);                                         // Inicia com os pontos desligados;
  writePonto2(0);   
}

void writePonto1(byte dot){digitalWrite (9,p);}          //Função para acionar o ponto dos displays (PINO 9 e 18);
void writePonto2(byte dot){digitalWrite (18,p);}        


void display1on(int va, int vb, int vc, int vd, int ve, int vf, int vg)
{
  a=2,b=3,c=4,d=5,e=6,f=7,g=8;
  digitalWrite(a,va), (b,vb), (c,vc), (d,vd), (e,ve), (f,vf), (g,vg);
}

void display2on(int va, int vb, int vc, int vd, int ve, int vf, int vg)
{
  a=10,b=11,c=12,d=13,e=14,f=15,g=16;
  digitalWrite(a,va), (b,vb), (c,vc), (d,vd), (e,ve), (f,vf), (g,vg);
}

// DISPLAY 1 -------------------------------
void zero1(){display1on(1,1,1,1,1,1,0);}
void um1(){display1on(0,1,1,0,0,0,0);}
void dois1(){display1on(1,1,0,1,1,0,1);}
void tres1(){display1on(1,1,1,1,0,0,1);}
void quatro1(){display1on(0,1,1,0,0,1,1);}
void cinco1(){display1on(1,0,1,1,0,1,1);}
void seis1(){display1on(1,0,1,1,1,1,1);}
void sete1(){display1on(1,1,1,0,0,0,0);}
void oito1(){display1on(1,1,1,1,1,1,1);}
void nove1(){display1on(1,1,1,0,0,1,1);}

// DISPLAY 2 -------------------------------
void zero2(){display2on(1,1,1,1,1,1,0);}
void um2(){display2on(0,1,1,0,0,0,0);}
void dois2(){display2on(1,1,0,1,1,0,1);}
void tres2(){display2on(1,1,1,1,0,0,1);}
void quatro2(){display2on(0,1,1,0,0,1,1);}
void cinco2(){display2on(1,0,1,1,0,1,1);}
void seis2(){display2on(1,0,1,1,1,1,1);}
void sete2(){display2on(1,1,1,0,0,0,0);}
void oito2(){display2on(1,1,1,1,1,1,1);}
void nove2(){display2on(1,1,1,0,0,1,1);}

void loop(){
  void zero1();
  void um2();
  delay (1000);
  void um1();
  void zero2();
}
  

