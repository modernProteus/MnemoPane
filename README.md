🔹 README.md (V1 Draft)

# MnemoPane

MnemoPane is a low-power, Wi-Fi enabled e-paper picture frame designed to feel less like a screen and more like a window into memory.

It pairs locally, hosts its own admin interface, and displays curated images in static or slow-slideshow mode. No cloud dependency required. Built to be reliable, quiet, and long-lived.

---

## ✨ Philosophy

MnemoPane is intentionally:

- **Local-first** – pairing, uploads, and control are hosted on-device
- **Low refresh** – optimized for e-paper longevity and battery efficiency
- **Appliance-like** – predictable behavior, minimal maintenance
- **Modular** – hardware can evolve without rewriting the entire system

It is not a tablet in a frame.
It is not a streaming display.
It is a digital print that updates gently.

---

## 🖼 Core Features (V1 – Feather Build)

- 7.3" 800×480 color e-paper display (Waveshare E6 panel)
- Static mode (lock a single image)
- Slideshow mode (configurable interval)
- Local Wi-Fi pairing via captive portal
- Local Admin UI (upload, reorder, configure)
- microSD storage for image library
- Battery powered (LiPo)
- Deep sleep between refreshes

---

## 🧠 Hardware Versions

### V1 – Feather ESP32-S3 TFT
- Built-in LiPo charging
- 2MB PSRAM
- microSD (SPI)
- Shared SPI bus for e-paper + SD
- No physical buttons (software-driven control)

### Planned
- V2 – ESP32-S3 (16MB Flash / 8MB PSRAM)
- V3 – Raspberry Pi Zero 2 W experimental build

---

## 📂 Repository Structure

firmware/       → ESP32 firmware source
hardware/       → Wiring diagrams, BOMs
enclosure/      → 3D models (STL / STEP)
docs/           → Architecture & build documentation
assets/         → UI assets, branding, diagrams

---

## 🔧 Development Roadmap

Current milestone: **V1 – Feather MVP**

Planned phases:
1. Display bring-up
2. SD storage integration
3. Image processing pipeline
4. Setup AP + Wi-Fi pairing
5. Local Admin UI
6. Slideshow scheduler + deep sleep
7. OTA update mechanism

Project planning is managed in the GitHub Project board.

---

## 🔄 Firmware Updates

MnemoPane supports OTA firmware updates via a version manifest hosted in the repository.

Update flow:
- Device checks remote manifest
- Compares version
- Downloads and verifies firmware
- Performs safe OTA update with rollback support

Details in `/docs/04_OTA_Release_Process.md`.

---

## 🧩 Design Principles

- Refresh no more frequently than recommended by panel manufacturer.
- Enter display sleep after every update.
- Never cut power mid-refresh.
- Maintain graceful Wi-Fi fallback mode.
- Protect battery from deep discharge.

---

## 🚀 Status

V1 hardware prototyping in progress.
Enclosure design and firmware scaffolding underway.

---

## 📜 License

TBD


⸻
