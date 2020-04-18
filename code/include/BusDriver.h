#ifndef _BUS_DRIVER_H_
#define _BUS_DRIVER_H_

#include <stdlib.h>
#include <string.h>
#include <stdint.h>
// #include "i2c_adapter.h"
// #include "uart_adapter.h"


// uint8_t ReadFromI2CBus(void);
// uint8_t ReadFromUARTBus(void);

uint8_t GenericBus(void);
uint8_t (*ReadBus)(void);
uint8_t GetData(void);

#endif  /* _BUS_DRIVER_H */
