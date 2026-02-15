# User Experience – V1

## First Boot Experience

1. Device powers on.
2. Creates Wi-Fi access point: `MnemoPane-Setup`.
3. User connects via phone.
4. Captive portal allows Wi-Fi configuration.
5. Device joins home network.

---

## Normal Operation

Modes:
- Static Mode (single image displayed indefinitely)
- Slideshow Mode (interval configurable)

Admin access:
- Available at `mnemo-pane.local`
- Accessible via NFC tag (optional)

---

## Admin UI Capabilities

- Upload images
- Reorder playlist
- Delete images
- Select mode
- Configure refresh interval
- Trigger manual refresh
- View device status

---

## Failure Recovery

- If Wi-Fi fails: device re-enters Setup mode
- If SD fails: display error state
- If battery low: pause slideshow

User interactions remain minimal and predictable.