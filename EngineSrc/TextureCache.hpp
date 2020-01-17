//
// Created by User2 on 1/17/2020.
//

#pragma once

#include <Texture2D.hpp>
#include <map>

struct TextureCache {

    TextureCache();

    ~TextureCache();

    Texture2D GetTexture(const std::string &filePath);

private:
    std::map<std::string, Texture2D> _textureMap;
};