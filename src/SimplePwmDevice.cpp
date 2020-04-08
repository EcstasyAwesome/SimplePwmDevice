#include "SimplePwmDevice.h"

/*
 * @param pin
 *        pin number that a device is connected
 */
 
SimplePwmDevice::SimplePwmDevice(const uint8_t pin) {
  _pin = pin;
  pinMode(_pin, OUTPUT);
}

/*
 * @param value
 *        pwm level
 * @return true if a value was applied
 */

bool SimplePwmDevice::setPwm(const uint8_t value) {
  if (_pwm != value) {
  	_pwm = value;
  	_pwm == 0 ? _state = false : _state = true;
    analogWrite(_pin, _pwm);
    return true;
  }
  return false;
}

/*
 * @return pwm level
 */

uint8_t SimplePwmDevice::getPwm() {
  return _pwm;
}

/*
 * @return device state
 */

bool SimplePwmDevice::isActive() {
  return _state;
}