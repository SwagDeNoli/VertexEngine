//
// Created by User2 on 1/16/2020.
//

#include <iostream>
#include "ImageLoader.hpp"

Texture2D ImageLoader::LoadImage(const std::string &imagePath) {

    Texture2D newTexture{};
    int width, height, numOfChannels;

    glGenTextures(1, &newTexture._textureId);
    glBindTexture(GL_TEXTURE_2D, newTexture._textureId);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    stbi_set_flip_vertically_on_load(true);
    unsigned char *imageData = stbi_load(imagePath.c_str(), &width, &height, &numOfChannels, 0);
    if (imageData) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, imageData);
    } else {
        std::cout << "Error! Image: " << imageData << " could not be loaded";
    }

    newTexture.SetWidth(width);
    newTexture.SetHeight(height);

    stbi_image_free(imageData);

    return newTexture;
}
