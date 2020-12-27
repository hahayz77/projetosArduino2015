#include <VirtualWire.h>
char cad[16];
int i=0;

void setup(){
vw_set_ptt_inverted(true);
vw_setup(2000);
vw_set_tx_pin(12);
Serial.begin(9600);
Serial.print("End with \".\" each data");
}
void loop()
{
if( Serial.available() > 0){
cad[i] = Serial.read(); 
i++;
}
if( cad[i-1] == '.')
{
cad[i] = '\0'; 
i=0;
vw_send((byte *)cad, strlen(cad)); 
vw_wait_tx();
delay(400);
}
}
