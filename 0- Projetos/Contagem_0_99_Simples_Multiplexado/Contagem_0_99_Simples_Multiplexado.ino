//DANILO MARTINS DE BRITO FIALHO;
//ETEPAM - MECATRONICA MANHÃ 2014;
//PROJETO DE UM CONTADOR (0 - 99) MULTIPLEXADO COM LOGICA SIMPLES;
//OBS.: PROGRAMAÇÃO PARA DISPLAY 4 DIGITOS CÁTODO COMUM (GND COMUM);

//PINAGEM DOS DISPLAYS, E DA MULTIPLEXAÇÃO;
int a=2,b=3,c=4,d=5,e=6,f=7,g=8,d1=10,d2=11;
//TEMPO EM MILISEGUNDOS; VALOR NUMÉRICO DAS UNIDADES E DEZENAS DOS DISPLAYS;
int t=0,un=0,dz=0;

//FUNÇÃO PARA MOSTRAR O NÚMERO NO DISPLAY;
void num_display(int va, int vb, int vc, int vd, int ve, int vf, int vg){
digitalWrite(a,va);digitalWrite(b,vb);digitalWrite(c,vc);digitalWrite(d,vd);
digitalWrite(e,ve);digitalWrite(f,vf);digitalWrite(g,vg);
}

//DEFINIÇÃO DOS PINOS DE MULTIPLEXAÇÃO;
void multiplex(int vd1, int vd2){
 digitalWrite(d1, vd1); digitalWrite (d2, vd2);
}

//FUNÇÃO PARA DEFINIR O NÚMERO NO DISPLAY;
void numero(int num){
  if (num == 0){num_display(1,1,1,1,1,1,0);}
  if (num == 1){num_display(0,1,1,0,0,0,0);}
  if (num == 2){num_display(1,1,0,1,1,0,1);}
  if (num == 3){num_display(1,1,1,1,0,0,1);}
  if (num == 4){num_display(0,1,1,0,0,1,1);}
  if (num == 5){num_display(1,0,1,1,0,1,1);}
  if (num == 6){num_display(1,0,1,1,1,1,1);}
  if (num == 7){num_display(1,1,1,0,0,0,0);}
  if (num == 8){num_display(1,1,1,1,1,1,1);}
  if (num == 9){num_display(1,1,1,1,0,1,1);}
}

void setup(){
//DEFINIÇÃO DAS PORTAS DO DISPLAY COMO SAIDAS;
pinMode(a, OUTPUT); pinMode(b, OUTPUT); pinMode(c, OUTPUT); pinMode(d, OUTPUT);
pinMode(e, OUTPUT); pinMode(f, OUTPUT); pinMode(g, OUTPUT);
//DEFIINIÇÃO DAS PORTAS DA MULTIPLEXAÇÃO COMO SAIDAS;
pinMode(d1, OUTPUT);pinMode(d2, OUTPUT);

//INICIANDO OS DISPLAYS EM ZERO;MULTIPLEXAÇÃO PARA "TRAVAR" OS DISPLAYS;
numero(0); multiplex(1,1);
}

void loop(){
//ESTRUTURA DE REPETIÇÃO PARA EXECUTAR A CONTAGEM NOS DISPLAYS;
for (un = 0; un < 10; un++){
      for (t=0; t <50; t++){
      numero(un);
      multiplex(0,1);delay(10);
      numero(dz);
      multiplex(1,0);delay(10);
    }
}
//ADICIONAR UM A VARIÁVEL DZ (DEZENA);
dz++;
//QUANDO A VARIAVEL DZ FOR IGUAL A 10 ENTÃO OS VALORES SÃO ZERADOS;
if (dz == 10){dz=0;un=0;multiplex(1,1);}
}
