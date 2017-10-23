#ifndef __STM8S
#define __STM8S

#ifdef MCU 

    #if MCU == stm8s103f3
        #include "stm8s103f3/stm8s103f3_clk.h"
        #include "stm8s103f3/stm8s103f3_gpio.h"
        #include "stm8s103f3/stm8s103f3_spi.h"
        #include "stm8s103f3/stm8s103f3_i2c.h"
        #include "stm8s103f3/stm8s103f3_uart.h"
    #elif MCU == stm8s003f3
        #include "stm8s103f3/stm8s103f3_clk.h"
        #include "stm8s103f3/stm8s103f3_gpio.h"
        #include "stm8s103f3/stm8s103f3_spi.h"
        #include "stm8s103f3/stm8s103f3_i2c.h"
        #include "stm8s103f3/stm8s103f3_uart.h"
    #else
        #error "Not supported MCU, sorry =(. Maybe added soon..."
    #endif

#else
    #error "MCU must be defined. MCU is macro that idicate what mcu you use (MCU=stm8s103f3 or MCU=stm8s003f3, etc.). "
#endif

#endif /* __STM8S */