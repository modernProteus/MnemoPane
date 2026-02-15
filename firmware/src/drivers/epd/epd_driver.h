#pragma once

#include <stdint.h>
#include <stddef.h>

namespace mnemo::epd {

// Minimal “panel-ready” frame format: you can evolve this later.
// For now, treat the buffer as “vendor encoded” bytes produced by your pipeline.
struct FrameBuffer {
  const uint8_t* data;
  size_t len;
};

// Common panel info
struct PanelInfo {
  uint16_t width;
  uint16_t height;
};

// High-level interface for any EPD implementation (Waveshare now, others later)
class IEpdDriver {
public:
  virtual ~IEpdDriver() = default;

  // Initialize hardware + panel
  virtual bool begin() = 0;

  // Put panel into low-power sleep after a refresh
  virtual void sleep() = 0;

  // Return panel info
  virtual PanelInfo info() const = 0;

  // Render a vendor-encoded full frame (no partial refresh for this panel)
  virtual bool displayFrame(const FrameBuffer& frame) = 0;
};

} // namespace mnemo::epd