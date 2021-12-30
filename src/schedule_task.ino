/*
 * Project schedule_task
 * Description:
 * Author:
 * Date:
 */
#include "schedule.h"
#define LED_PIN D6

schedule Schedule(1);


void setup() {
  
  pinMode(LED_PIN, OUTPUT);
}


void loop() {

  Schedule.task(&blink_led, 1);

}
 
void blink_led(){

     digitalWrite(LED_PIN, HIGH);
     delay(3000);
     digitalWrite(LED_PIN, LOW);
     delay(1000);
}