// This file was developed by Thomas Müller <thomas94@gmx.net>.
// It is published under the BSD 3-Clause License within the LICENSE file.

#pragma once

#include <tev/imageio/ImageSaver.h>

#include <ostream>

TEV_NAMESPACE_BEGIN

class ExrImageSaver : public TypedImageSaver<float> {
public:
    void save(std::ostream& oStream, const fs::path& path, const std::vector<float>& data, const nanogui::Vector2i& imageSize, int nChannels) const override;

    bool hasPremultipliedAlpha() const override {
        return true;
    }

    virtual bool canSaveFile(const std::string& extension) const override {
        return toLower(extension) == ".exr";
    }
};

TEV_NAMESPACE_END
