//
// Created by User2 on 1/17/2020.
//

#include "TextureCache.hpp"
#include "ImageLoader.hpp"

TextureCache::TextureCache() {

}

TextureCache::~TextureCache() {

}

Texture2D TextureCache::GetTexture(const std::string &filePath) {

    auto iterator = _textureMap.find(filePath);

    //Create texture if it doesnt already exist
    if (iterator == _textureMap.end()) {
        Texture2D newTexture = ImageLoader::LoadImage(filePath);

        _textureMap.insert(std::make_pair(filePath, newTexture));

        return newTexture;
    }

    //Return existing texture
    return iterator->second;
}


