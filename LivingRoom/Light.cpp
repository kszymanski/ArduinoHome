// 
// 
// 

#include "Light.h"


Light::Light(int lightPin) {
	LIGHT = lightPin;
	pinMode(LIGHT, OUTPUT);
	TurnOff();
}

void Light::TurnOn() {
	digitalWrite(LIGHT, HIGH);
	isOn = true;
}

void Light::TurnOff() {
	digitalWrite(LIGHT, LOW);
	isOn = false;
}

bool Light::IsOn() {
	return isOn;
}