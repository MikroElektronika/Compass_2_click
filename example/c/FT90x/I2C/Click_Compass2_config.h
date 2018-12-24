#include "Click_Compass2_types.h"

const uint32_t _COMPASS2_SPI_CFG[ 3 ] = 
{ 
	_SPI_MASTER_CLK_RATIO_256,
	_SPI_CFG_POLARITY_IDLE_HIGH |
	_SPI_CFG_PHASE_CAPTURE_RISING | 
	_SPI_CFG_SS_AUTO_DISABLE | 
	_SPI_CFG_FIFO_DISABLE, 
	_SPI_SS_LINE_NONE 
};

const uint32_t _COMPASS2_I2C_CFG[ 2 ] =  
{
	_I2CM_SPEED_MODE_STANDARD, 
	_I2CM_SWAP_DISABLE
};
