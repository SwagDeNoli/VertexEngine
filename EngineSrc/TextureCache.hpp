//
// Created by User2 on 1/21/2020.
//

#pragma once

#include <map>
#include <string>
#include <Texture2D.hpp>

struct TextureCache {

    Texture2D LoadTexture(const std::string &texturePath);

private:
    std::map<std::string, Texture2D> _textureMap;
};