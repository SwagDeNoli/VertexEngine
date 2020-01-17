//
// Created by User2 on 1/17/2020.
//

#pragma once

#include <map>
#include <Texture2D.hpp>
#include "TextureCache.hpp"

struct ResourceManager {

    static Texture2D GetTexture(const std::string &texturePath);

private:
    static TextureCache _textureCache;

};