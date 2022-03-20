/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Tencent is pleased to support the open source community by making libpag available.
//
//  Copyright (C) 2021 THL A29 Limited, a Tencent company. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
//  except in compliance with the License. You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  unless required by applicable law or agreed to in writing, software distributed under the
//  license is distributed on an "as is" basis, without warranties or conditions of any kind,
//  either express or implied. see the license for the specific language governing permissions
//  and limitations under the license.
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "core/Image.h"
#include "pag/pag.h"
#include "rendering/graphics/Graphic.h"

namespace pag {

class StillImage : public PAGImage {
 public:
  static std::shared_ptr<StillImage> MakeFrom(std::shared_ptr<tgfx::PixelBuffer> pixelBuffer);

  static std::shared_ptr<StillImage> MakeFrom(std::shared_ptr<tgfx::Image> image);

 protected:
  std::shared_ptr<Graphic> getGraphic() const override {
    return graphic;
  }

 private:
  StillImage(int width, int height) : PAGImage(width, height) {
  }

  std::shared_ptr<Graphic> graphic = nullptr;

  friend class PAGImage;
};
}  // namespace pag
