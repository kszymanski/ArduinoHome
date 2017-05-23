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
	bool isOn;
protected:
public:
	Light(int);
	void TurnOn();
	void TurnOff();
	bool IsOn();
};

#endif

