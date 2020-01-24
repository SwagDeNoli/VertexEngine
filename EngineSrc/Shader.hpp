//
// Created by User2 on 1/15/2020.
//

#pragma once

#include <string>
#include <glad/glad.h>
#include <glm/glm.hpp>


struct Shader {

    Shader(const std::string &vertexPath, const std::string &fragmentPath);

    ~Shader();

    void Use();

    GLuint vertShader;
    GLuint fragShader;

    inline GLuint GetId() {
        return _id;
    }

    void SetUniformMat4(const std::string &uniformName, const glm::mat4 &matrix4);

private:
    GLuint _id;

};


