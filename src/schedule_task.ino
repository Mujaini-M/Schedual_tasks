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

  Schedule.task(&blink_led, 1); //(Function, Time_in_minutes) the function will be executed once every Time_in_Minutes in this case every one minutes.

}
 
void blink_led(){

     digitalWrite(LED_PIN, HIGH);
     delay(3000);
     digitalWrite(LED_PIN, LOW);
     delay(1000);
}