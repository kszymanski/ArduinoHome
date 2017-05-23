/*
 Name:		LivingRoom.ino
 Created:	5/23/2017 4:18:05 PM
 Author:	kszymanski
*/
#include "Light.h"
#include "MotionSensor.h"

int LED_STRIP = PC13;
int LED_STRIP_SWITCH = PB11;

int MOTION_SENSOR = PB1;



// the setup function runs once when you press reset or power the board

Light* LedStrip;
MotionSensor* Motion;

void setup() {
	//Light
	LedStrip = new Light(LED_STRIP);
	pinMode(LED_STRIP_SWITCH, INPUT_PULLUP);
	attachInterrupt(LED_STRIP_SWITCH, ToogleLedStrip, FALLING);

	//Motion
	Motion = new MotionSensor(MOTION_SENSOR);
}

// the loop function runs over and over again until power down or reset
void loop() {
	motion();
}

void ToogleLedStrip() {
	LedStrip->ToggleLight();
}

void motion() {
	if (Motion->IsMotionDetected()) {
		if (Motion->lastMotionDetected - millis() > 1000) {

		}
		Motion->lastMotionDetected = millis();
		if (!LedStrip->IsOn()) {
			LedStrip->TurnOn();
		}
	}
	else
	{
		if (LedStrip->IsOn())
		{
			LedStrip->TurnOff();
		}
	}
}
