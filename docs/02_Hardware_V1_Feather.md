# Hardware – V1 Feather ESP32-S3 TFT

## Core Components

- Adafruit Feather ESP32-S3 TFT
- Waveshare 7.3" e-Paper HAT (E)
- microSD SPI module
- 1S LiPo battery (3000mAh recommended)

---

## Power Architecture

LiPo → Feather onboard charger → 3.3V system rail

No external boost module required for V1.

Future support:
- MAX17048 fuel gauge (I2C)

---

## SPI Bus Layout

Shared SPI:
- SCK
- MOSI

Separate CS:
- CS_EPD
- CS_SD

Additional pins:
- DC
- RST
- BUSY

(GPIO mapping to be defined.)

---

## Enclosure Design Goals

- Modular electronics tray
- Easy USB access for service
- Battery pocket with strain relief
- Space reserved for future upgrades