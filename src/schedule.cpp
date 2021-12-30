#include "Particle.h"
#include "schedule.h"

schedule::schedule(int act){

}

unsigned current_time {0};

void schedule::task(void (*blink_LED)(), unsigned time_to_run)
{
      time_to_run *= 60000;
      if(millis()-current_time <= time_to_run);

      else{
          blink_LED();
          current_time = millis();
      }
}
