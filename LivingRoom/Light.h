// Light.h

#ifndef _LIGHT_h
#define _LIGHT_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Light {
private:
	int LIGHT;
	unsigned long last_interrupt_time = 0;
	bool isOn;
protected:
public:
	Light(int);
	void TurnOn();
	void TurnOff();
	bool IsOn();
	void ToggleLight();
};

#endif

