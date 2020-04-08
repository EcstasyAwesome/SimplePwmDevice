#ifndef SimplePwmDevice_h
#define SimplePwmDevice_h
#include <Arduino.h>

class SimplePwmDevice {
  private:
    uint8_t _pin;
    uint8_t _pwm;
	bool _state;
  public:
    SimplePwmDevice(const uint8_t pin);
    bool setPwm(const uint8_t value);
	bool isActive();
	uint8_t getPwm();
};

#endif