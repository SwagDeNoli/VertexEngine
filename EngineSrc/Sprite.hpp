//
// Created by User2 on 1/14/2020.
//

#pragma once


#include <glad/glad.h>

struct Sprite {

    Sprite();

    ~Sprite();

    void Init(float x, float y, float width, float height);

    void Draw();

private:
    float _x, _y;
    float _width, _height;

    GLuint _vertexArray;
    GLuint _vertexBuffer;
    GLuint _indexBuffer;
};

