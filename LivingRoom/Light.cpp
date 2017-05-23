// 
// 
// 

#include "Light.h"


Light::Light(int lightPin) {
	LIGHT = lightPin;
	pinMode(LIGHT, OUTPUT);
	TurnOn();
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

void Light::ToggleLight()
{
	unsigned long interrupt_time = millis();
	if (interrupt_time - last_interrupt_time > 500)
	{
		if (isOn) {
			TurnOff();
		}
		else
		{
			TurnOn();
		}
	}
	last_interrupt_time = interrupt_time;
}
