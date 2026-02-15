# OTA Release Process

## Overview

MnemoPane firmware is versioned and released via GitHub.

OTA updates are delivered through a remote manifest file.

---

## Update Flow

1. Device checks manifest.json
2. Compare current version
3. Download firmware.bin
4. Verify checksum
5. Install via OTA partition
6. Reboot
7. Rollback if boot fails

---

## Release Steps

1. Tag release in Git
2. Generate firmware binary
3. Upload firmware.bin
4. Update manifest.json
5. Publish release

---

## Safety

- Dual partition scheme
- SHA256 verification
- Version comparison guard