//
// Created by User2 on 1/14/2020.
//

#include <Sprite.hpp>
#include <Vertex.hpp>
#include <Texture2D.hpp>
#include "ResourceManager.hpp"

Sprite::Sprite() : _vertexArray(0), _vertexBuffer(0), _indexBuffer(0) {

}

Sprite::~Sprite() {
    glDeleteBuffers(1, &_indexBuffer);
    glDeleteBuffers(1, &_vertexBuffer);
    glDeleteVertexArrays(1, &_vertexArray);
}

void Sprite::Init(float x, float y, float width, float height, const std::string &texturePath) {
    _x = x;
    _y = y;
    _width = width;
    _height = height;

    _texture = ResourceManager::instance().GetTexture(texturePath);

    glGenVertexArrays(1, &_vertexArray);
    glGenBuffers(1, &_vertexBuffer);
    glGenBuffers(1, &_indexBuffer);

    Vertex vertices[4];

    vertices[0].position = glm::vec2(x - width, y + height);
    vertices[1].position = glm::vec2(x + width, y + height);
    vertices[2].position = glm::vec2(x + width, y - height);
    vertices[3].position = glm::vec2(x - width, y - height);

    vertices[0].color = glm::vec3(1, 1, 1);
    vertices[1].color = glm::vec3(1, 1, 1);
    vertices[2].color = glm::vec3(1, 1, 1);
    vertices[3].color = glm::vec3(1, 1, 1);

    vertices[0].uv = glm::vec2(0, 1);
    vertices[1].uv = glm::vec2(1, 1);
    vertices[2].uv = glm::vec2(1, 0);
    vertices[3].uv = glm::vec2(0, 0);

    GLuint indices[6] = {
            0, 1, 2,
            0, 2, 3
    };

    glBindVertexArray(_vertexArray);
    glBindBuffer(GL_ARRAY_BUFFER, _vertexBuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (GLvoid *) offsetof(Vertex, position));
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (GLvoid *) offsetof(Vertex, color));
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (GLvoid *) offsetof(Vertex, uv));
    glEnableVertexAttribArray(2);

    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(_vertexArray);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, _indexBuffer);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
    glBindVertexArray(0);
}

void Sprite::Draw() {
    glBindTexture(GL_TEXTURE_2D, _texture.textureId);
    glBindVertexArray(_vertexArray);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, nullptr);
}
