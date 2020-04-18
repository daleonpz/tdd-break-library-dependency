#ifndef _UART_ADAPTER_H_
#define _UART_ADAPTER_H_

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void open_uart(void);
uint8_t read_uart_bus(void);
void close_uart(void);

#endif  /* _UART_ADAPTER_H_ */
