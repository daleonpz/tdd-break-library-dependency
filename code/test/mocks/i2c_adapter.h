#ifndef _I2C_ADAPTER_H_
#define _I2C_ADAPTER_H_

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void open_i2c(void);
uint8_t read_i2c_bus(void);
void close_i2c(void);

#endif  /* _I2C_ADAPTER_H_ */
