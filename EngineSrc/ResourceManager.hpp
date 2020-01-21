//
// Created by User2 on 1/21/2020.
//

#pragma once

#include <TextureCache.hpp>


struct ResourceManager {

    static ResourceManager &instance() {
        static ResourceManager *instance = new ResourceManager();
        return *instance;
    }

    static Texture2D GetTexture(const std::string &texturePath);

private:
    ResourceManager() {}

    static TextureCache _textureCache;
};