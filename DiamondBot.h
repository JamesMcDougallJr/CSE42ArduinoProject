#ifndef DIAMONDBOT_H
#define DIAMONDBOT_H

#include "Gadgetron.h"


#define BUZZER_1 5        
Buzzer buzzer(BUZZER_1);

#define DRIVE_STBY 8        
#define DRIVE_PWMA 6        
#define DRIVE_AIN1 10        
#define DRIVE_AIN2 11        
#define DRIVE_PWMB 9        
#define DRIVE_BIN1 12        
#define DRIVE_BIN2 13        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);

#define SERVO_DATA 3        
ServoMotor Servo(SERVO_DATA);

#define PINCER_DATA 4        
Pincer pincer(PINCER_DATA);

#define LED_CONTROL A1        
LED led(LED_CONTROL);

#define KNOB_SENSE A2        
#define KNOB_A A3        
#define KNOB_B A4        
//RotaryEncoder knob(KNOB_SENSE,KNOB_A,KNOB_B);

#define DISTANCESENSOR_A A0        
DistanceSensor distanceSensor(DISTANCESENSOR_A);


#endif
