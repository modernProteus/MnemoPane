# Firmware Architecture – V1

## Core Modules

### Network Manager
- STA mode
- SoftAP fallback
- Captive portal
- mDNS advertisement

### Web UI
- File upload
- Playlist management
- Mode selection
- Interval configuration

### Storage Manager
- SD mount
- Directory structure
- JSON state files

### Image Pipeline
- JPEG decode
- Resize/crop to 800×480
- Color quantization
- Dithering
- Processed frame cache

### Display Driver
- SPI communication
- Busy wait handling
- Sleep command after refresh

### Scheduler
- Timer wake
- Slideshow progression
- Deep sleep entry

---

## Data Structure

/photos/original/
/photos/processed/
/state/settings.json
/state/playlist.json

---

## System Behavior

Wake → Check mode → Process if needed → Refresh → Sleep