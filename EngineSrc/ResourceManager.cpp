//
// Created by User2 on 1/21/2020.
//

#include "ResourceManager.hpp"

TextureCache ResourceManager::_textureCache;

Texture2D ResourceManager::GetTexture(const std::string &texturePath) {
    return _textureCache.LoadTexture(texturePath);
}

