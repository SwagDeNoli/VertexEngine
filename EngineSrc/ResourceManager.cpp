//
// Created by User2 on 1/17/2020.
//

#include "ResourceManager.hpp"

static TextureCache _textureCache;

Texture2D ResourceManager::GetTexture(const std::string &texturePath) {
    return _textureCache.GetTexture(texturePath);
}
