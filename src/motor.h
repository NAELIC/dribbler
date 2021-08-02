#pragma once

#include <mbed.h>
#include "define/hardware.h"

namespace motor {
    void init();
    void tick();
    void motor_hall_set(bool enable, int value);
    void hall_irq();
}