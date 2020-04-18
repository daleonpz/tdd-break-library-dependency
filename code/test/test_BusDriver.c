#include "unity.h"
#include "BusDriver.h"
#include "FakeBusDriver.h"

void setUp(void)
{
}

void tearDown()
{
}


void test_GetData()
{
    uint8_t expected = 0x0E;
    uint8_t dataFromFunction = 0;
    ReadBus = FakeReadBus;

    dataFromFunction = GetData();

    TEST_ASSERT_EQUAL_UINT8(expected, dataFromFunction);
}

