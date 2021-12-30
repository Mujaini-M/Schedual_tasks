#ifndef schedule_h
#define schedule_h

#include "Particle.h"

class schedule
{
  public:

    schedule(int act);
    void task(void (*blink_led)(), unsigned time_to_run);

  private:
 
};

#endif