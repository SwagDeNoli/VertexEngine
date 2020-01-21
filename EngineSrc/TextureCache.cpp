//
// Created by User2 on 1/21/2020.
//

#include "TextureCache.hpp"
#include "ImageLoader.hpp"

Texture2D TextureCache::LoadTexture(const std::string &texturePath) {

    auto iterator = _textureMap.find(texturePath);

    if (iterator == _textureMap.end()) {
        Texture2D newTexture = ImageLoader::LoadImage(texturePath);

        _textureMap.insert(std::make_pair(texturePath, newTexture));
        return newTexture;
    }

    return iterator->second;

}
