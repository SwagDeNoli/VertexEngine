//
// Created by User2 on 1/17/2020.
//

#pragma once
#include <glad/glad.h>

struct Texture2D {
    int GetWidth() const {
        return _width;
    }

    void SetWidth(int width) {
        _width = width;
    }

    int GetHeight() const {
        return _height;
    }

    void SetHeight(int height) {
        _height = height;
    }

    GLuint _textureId;
private:
    int _width;
    int _height;
};