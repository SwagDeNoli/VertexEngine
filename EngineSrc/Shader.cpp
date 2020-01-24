//
// Created by User2 on 1/15/2020.
//

#include <fstream>
#include <sstream>
#include <iostream>
#include <glm/gtc/type_ptr.hpp>
#include "Shader.hpp"
#include "IOManager.hpp"

static void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string &errorMessage);

static std::string LoadShader(const std::string &fileName);

static GLuint CreateShader(const std::string &text, GLenum shaderType);

Shader::Shader(const std::string &vertexPath, const std::string &fragmentPath) {
    _id = glCreateProgram();
    vertShader = CreateShader(LoadShader(vertexPath), GL_VERTEX_SHADER);
    fragShader = CreateShader(LoadShader(fragmentPath), GL_FRAGMENT_SHADER);

    glAttachShader(_id, vertShader);
    glAttachShader(_id, fragShader);

    glLinkProgram(_id);
    CheckShaderError(_id, GL_LINK_STATUS, true, "Error! Shader program failed to link");

    glValidateProgram(_id);
    CheckShaderError(_id, GL_VALIDATE_STATUS, true, "Error! Shader program is invalid");

}

Shader::~Shader() {
    glDetachShader(_id, vertShader);
    glDetachShader(_id, fragShader);
    glDeleteProgram(_id);
    _id = 0;
}

void Shader::Use() {
    glUseProgram(_id);
}

GLuint CreateShader(const std::string &text, GLenum shaderType) {

    GLuint shader = glCreateShader(shaderType);
    if (shader == 0) {
        std::cout << "Error! Shader creation failed!" << std::endl;
    }

    const GLchar *shaderSourceStrings[1];
    shaderSourceStrings[0] = text.c_str();

    GLint shaderSourceLength[1];
    shaderSourceLength[0] = text.length();

    glShaderSource(shader, 1, shaderSourceStrings, shaderSourceLength);
    glCompileShader(shader);

    CheckShaderError(shader, GL_COMPILE_STATUS, false, "Error! Shader compilation failed");

    return shader;
}

std::string LoadShader(const std::string &fileName) {

    std::string output;
    bool success = IOManager::ReadFileToString(fileName, output);
    if (!success) {
        std::cout << "Could not read shader file: " << fileName << std::endl;
    }
    return output;
}

void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string &errorMessage) {
    GLint success;
    GLchar error[512];

    if (isProgram) {
        glGetProgramiv(shader, flag, &success);
    } else {
        glGetShaderiv(shader, flag, &success);
    }

    if (success == GL_FALSE) {
        if (isProgram) {
            glGetProgramInfoLog(shader, sizeof(error), nullptr, error);
        } else {
            glGetShaderInfoLog(shader, sizeof(error), nullptr, error);
        }

        std::cout << errorMessage << ": " << error << "'" << std::endl;
    }
}

void Shader::SetUniformMat4(const std::string &uniformName, const glm::mat4 &matrix4) {
    glUniformMatrix4fv(glGetUniformLocation(_id, uniformName.c_str()), 1, GL_FALSE, glm::value_ptr(matrix4));
}