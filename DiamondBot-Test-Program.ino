#include <Servo.h>
#include "DiamondBot.h"

void setup()
{
  Serial.begin(9600);
  buzzer.setup();
  drive.setup();
  Servo.setup();
  pincer.setup();
  led.setup();
//  knob.setup();
  distanceSensor.setup();
  
}

void loop()
{
  led.turnOn();
  drive.backward();
  
  if(distanceSensor.get_distance() < 10) {
    drive.stop();
    Servo.rotate(90);
    delay(1000);
    buzzer.playNote(NOTE_A4,300);
    delay(300);
    buzzer.playNote(NOTE_B4,300);
    delay(300);
    buzzer.playNote(NOTE_C4,300);
    delay(300);
    drive.spinLeft();
    delay(1000);
    drive.stop();
    Servo.rotate(0);
    delay(1000);
  
  }        
}
