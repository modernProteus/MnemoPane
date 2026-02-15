#pragma once

#include "../../hal/board_feather_s3_tft.h"

// Override Waveshare default pin macros BEFORE including DEV_Config.h

#define EPD_SCK_PIN   mnemo::hal::PIN_SPI_SCK
#define EPD_MOSI_PIN  mnemo::hal::PIN_SPI_MOSI
#define EPD_CS_PIN    mnemo::hal::PIN_EPD_CS
#define EPD_DC_PIN    mnemo::hal::PIN_EPD_DC
#define EPD_RST_PIN   mnemo::hal::PIN_EPD_RST
#define EPD_BUSY_PIN  mnemo::hal::PIN_EPD_BUSY

// If you're not switching panel power:
#define EPD_PWR_PIN   (-1)