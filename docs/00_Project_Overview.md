# MnemoPane – Project Overview

## Purpose

MnemoPane is a low-power, Wi-Fi enabled e-paper frame designed to display curated images in a calm, appliance-like manner.

It prioritizes:
- Reliability
- Local-first control
- Battery efficiency
- Long-term maintainability

---

## Architecture Summary

MnemoPane consists of:

- Display Layer (7.3" color e-paper)
- Control Layer (ESP32-S3)
- Storage Layer (microSD)
- Power Layer (LiPo + charging)
- Network Layer (Wi-Fi, local admin UI)
- Update Layer (OTA firmware system)

---

## Version Roadmap

### V1 – Feather ESP32-S3
- Basic slideshow + static
- Local pairing
- microSD storage
- OTA support

### V2 – Expanded ESP32-S3
- Increased PSRAM
- Refined power subsystem
- Enhanced image pipeline

### V3 – Raspberry Pi Variant (Experimental)
- Richer UI
- Advanced cloud sync experimentation

---

## Design Principles

- Respect e-paper refresh limits
- Minimize refresh frequency
- Enter deep sleep whenever possible
- Maintain offline operability
- Keep system modular# MnemoPane – Project Overview

## Purpose

MnemoPane is a low-power, Wi-Fi enabled e-paper frame designed to display curated images in a calm, appliance-like manner.

It prioritizes:
- Reliability
- Local-first control
- Battery efficiency
- Long-term maintainability

---

## Architecture Summary

MnemoPane consists of:

- Display Layer (7.3" color e-paper)
- Control Layer (ESP32-S3)
- Storage Layer (microSD)
- Power Layer (LiPo + charging)
- Network Layer (Wi-Fi, local admin UI)
- Update Layer (OTA firmware system)

---

## Version Roadmap

### V1 – Feather ESP32-S3
- Basic slideshow + static
- Local pairing
- microSD storage
- OTA support

### V2 – Expanded ESP32-S3
- Increased PSRAM
- Refined power subsystem
- Enhanced image pipeline

### V3 – Raspberry Pi Variant (Experimental)
- Richer UI
- Advanced cloud sync experimentation

---

## Design Principles

- Respect e-paper refresh limits
- Minimize refresh frequency
- Enter deep sleep whenever possible
- Maintain offline operability
- Keep system modular