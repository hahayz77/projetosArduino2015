#include <VirtualWire.h>

void setup(){
vw_set_tx_pin(12);
vw_setup(2000);	 // Bits per sec
Serial.begin(9600);
Serial.print("liga ou desliga?");
}

void loop(){
int x = Serial.read();
if( Serial.available() != 0){
vw_send((uint8_t*)x, 1); 
vw_wait_tx();
}
}
