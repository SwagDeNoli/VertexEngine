//
// Created by User2 on 1/15/2020.
//

#pragma once

#include <string>
#include "glad/glad.h"


struct Shader {

    Shader(const std::string &vertexPath, const std::string &fragmentPath);

    ~Shader();

    void Use();

    GLuint vertShader;
    GLuint fragShader;

private:
    GLuint _id;

};


