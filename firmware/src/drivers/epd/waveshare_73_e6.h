#pragma once

#include "epd_driver.h"

namespace mnemo::epd {

// Concrete implementation using vendored Waveshare driver code.
class Waveshare73E6Driver : public IEpdDriver {
public:
  bool begin() override;
  void sleep() override;
  PanelInfo info() const override;
  bool displayFrame(const FrameBuffer& frame) override;

private:
  PanelInfo panel_{800, 480};
};

} // namespace mnemo::epd