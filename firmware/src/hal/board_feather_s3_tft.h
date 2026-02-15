#pragma once

// MnemoPane - Board HAL: Adafruit Feather ESP32-S3 TFT (PID 5691)
// Keep all board/pin definitions in one place so V2/V3 can swap easily.

#include <stdint.h>

namespace mnemo::hal {

// ----------------------------
// SPI (shared bus)
// ----------------------------
// NOTE: Actual pin numbers depend on board variant and your wiring.
// For now, declare symbolic constants and fill in after pin-mapping.

static constexpr int PIN_SPI_SCK  = -1;   // TODO
static constexpr int PIN_SPI_MOSI = -1;   // TODO
static constexpr int PIN_SPI_MISO = -1;   // not used (write-only devices), but reserved

// ----------------------------
// e-Paper (Waveshare 7.3" HAT E)
// ----------------------------
static constexpr int PIN_EPD_CS   = -1;   // TODO
static constexpr int PIN_EPD_DC   = -1;   // TODO
static constexpr int PIN_EPD_RST  = -1;   // TODO
static constexpr int PIN_EPD_BUSY = -1;   // TODO

// ----------------------------
// microSD (SPI)
// ----------------------------
static constexpr int PIN_SD_CS    = -1;   // TODO

// ----------------------------
// I2C (reserved for MAX17048 later)
// ----------------------------
static constexpr int PIN_I2C_SDA  = -1;   // TODO
static constexpr int PIN_I2C_SCL  = -1;   // TODO

// ----------------------------
// Hostname / SSID defaults
// ----------------------------
static constexpr const char* DEFAULT_HOSTNAME   = "mnemo-pane";
static constexpr const char* DEFAULT_SETUP_SSID = "MnemoPane-Setup";

} // namespace mnemo::hal