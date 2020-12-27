// Arduino/MicroView code to sniff Etekcity power outlets codes with the RCSwitch library
// Outlets: http://www.amazon.com/gp/product/B00DQELHBS/
// Generic 433 Module: http://www.amazon.com/gp/product/B00M2CUALS (if you search for the code on the board you can find it in many other retailers)
// MicroView Pinout Guide: http://kit.microview.io/pinout/
// RCSwitch: https://code.google.com/p/rc-switch/
// Raspberry PI port:  http://timleland.com/wireless-power-outlets/

#include <RCSwitch.h>

// The interrupt number, on the MicroView this is PIN 11. On Arduino it is PIN 2. See http://arduino.cc/en/Reference/AttachInterrupt
#define INTERRUPT_RX 0

RCSwitch receiveSwitch = RCSwitch();

void setup()
{
	Serial.begin(9600);
	receiveSwitch.enableReceive(INTERRUPT_RX);
}

void loop()
{
	if (receiveSwitch.available())
	{
		int value = receiveSwitch.getReceivedValue();
		
		if (value == 0)
		{
			Serial.println("Unknown encoding");
		}
		else
		{
			Serial.print("Received ");
			Serial.print(receiveSwitch.getReceivedValue());
			Serial.print(" / ");
			Serial.print(receiveSwitch.getReceivedBitlength());
			Serial.print("bit ");
			Serial.print("Protocol: ");
			Serial.println(receiveSwitch.getReceivedProtocol());
			Serial.print("Delay (Pulse Length): ");
			Serial.println(receiveSwitch.getReceivedDelay());
		}
		
		receiveSwitch.resetAvailable();
	}
}
