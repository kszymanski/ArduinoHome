/*
 Name:		LivingRoom.ino
 Created:	5/23/2017 4:18:05 PM
 Author:	kszymanski
*/

// the setup function runs once when you press reset or power the board
#include "Light.h"
Light LedStrip(PC13);

void setup() {

}

// the loop function runs over and over again until power down or reset
void loop() {
	LedStrip.TurnOn();
	delay(2000);
	LedStrip.TurnOff();
	delay(2000);
}
