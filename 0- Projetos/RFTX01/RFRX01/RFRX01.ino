#include <LiquidCrystal.h>
#include <VirtualWire.h>
LiquidCrystal lcd(9, 8, 5, 4, 3, 2);
char cad[15];
int pos = 0;
void setup()
{
lcd.begin(16, 2); 
lcd.setCursor(1, 0);
vw_set_ptt_inverted(true);
vw_setup(2000); 
vw_set_rx_pin(10);
vw_rx_start(); 
}
void loop()
{
uint8_t buf[VW_MAX_MESSAGE_LEN]; 
uint8_t buflen = VW_MAX_MESSAGE_LEN; 
int i;

if( vw_get_message(buf, &buflen) ){
if(pos < 2)
lcd.setCursor(0, pos);
else{
pos=0;
lcd.clear();
}
for (i = 1; i < buflen; i++){
lcd.print((char)buf[i]);
pos++;
}
}
}
