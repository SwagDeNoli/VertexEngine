//
// Created by User2 on 1/16/2020.
//

#include "ImageLoader.hpp"

Texture2D ImageLoader::LoadImage(const std::string &imagePath) {

    Texture2D newTexture{};
    int width, height, numOfChannels;

    glGenTextures(1, &newTexture._textureId);
    unsigned char *imageData = stbi_load(imagePath.c_str(), &width, &height, &numOfChannels, 0);

    newTexture.SetWidth(width);
    newTexture.SetHeight(height);

    if (imageData) {
        glTexImage2D(GL_TEXTURE_2D)
    } else {

    }

    return newTexture;
}
