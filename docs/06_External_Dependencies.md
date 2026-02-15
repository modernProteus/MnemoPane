# External Dependencies & References

This document tracks third-party references, libraries, and vendor materials used by MnemoPane.

The goal is to keep MnemoPane maintainable by:
- pinning versions of dependencies when possible,
- isolating vendor code behind thin adapters,
- recording sources/licenses for anything vendored.

---

## Hardware References

### Waveshare – 7.3inch e-Paper HAT (E)
- Wiki / manual: https://www.waveshare.com/wiki/7.3inch_e-Paper_HAT_(E)
- Notes:
  - 800×480 color e-paper (E6 palette)
  - Full refresh is slow; avoid frequent refreshes
  - BUSY pin must be honored
  - Panel retains image with no power after refresh

### Adafruit – Feather ESP32-S3 TFT
- Product page: https://www.adafruit.com/product/5691
- Notes:
  - Built-in LiPo charging
  - 3.3V logic
  - USB-C for power/data
  - 2MB PSRAM, 4MB flash

---

## Firmware Dependencies

MnemoPane uses vendor display driver code (Waveshare) behind a stable internal interface.

### Waveshare Driver (vendored)
- Source: Waveshare e-Paper example/driver bundle
- Integration model: **Path A**
  - Vendor code is vendored into `firmware/src/drivers/epd/upstream_waveshare/`
  - MnemoPane interacts only via `firmware/src/drivers/epd/epd_driver.h`
  - A wrapper implementation lives in `firmware/src/drivers/epd/waveshare_73_e6.cpp`

Record the upstream version/zip/date in:
- `firmware/src/third_party/README.md`

---

## Licensing / Attribution

Any vendored third-party code must have:
- source URL
- license reference
- version/commit/date
- list of vendored files

See:
- `firmware/src/third_party/README.md`