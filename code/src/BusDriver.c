#include "BusDriver.h"

// uint8_t ReadFromI2CBus(void)
// {
//     uint8_t data;
//     open_i2c();
//     data = read_i2c_bus();
//     close_i2c();
//     return data;
// }
// 
// uint8_t ReadFromUARTBus(void)
// {
//     uint8_t data;
//     open_uart();
//     data = read_uart_bus();
//     close_uart();
//     return data;
// }

uint8_t GenericBus(void)
{
    return 0x00;
}

uint8_t (*ReadBus)(void) = GenericBus; 

uint8_t GetData(void)
{
    uint8_t data = 0;
    data = ReadBus();
    data &= 0x0F;
    return data;
}


