#include "Click_Compass2_types.h"

const uint32_t _COMPASS2_SPI_CFG[ 4 ] = 
{ 
	_SPI_MASTER_OSC_DIV64, 
	_SPI_DATA_SAMPLE_MIDDLE, 
	_SPI_CLK_IDLE_LOW, 
	_SPI_LOW_2_HIGH 
};

const uint32_t _COMPASS2_I2C_CFG[ 1 ] = 
{
	100000
};
