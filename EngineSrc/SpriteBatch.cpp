//
// Created by user2 on 1/23/2020.
//

#include <algorithm>
#include "SpriteBatch.hpp"

SpriteBatch::SpriteBatch() : _vertexArray(0), _vertexBuffer(0) {

}

SpriteBatch::~SpriteBatch() {

}

void SpriteBatch::Init() {
    CreateVertexArray();
}

void SpriteBatch::Begin(GlyphSortTypes sortType /*= GlyphSortTypes::TEXTURE*/) {
    _sortType = sortType;
}

void SpriteBatch::End() {
    SortGlyphs();


}

void
SpriteBatch::Draw(const glm::vec2 &position, const glm::vec2 &dimensions, const GLuint &texture, const float &depth,
                  const glm::vec3 &color) {

    Glyph *newGlyph = new Glyph;
    newGlyph->texture = texture;
    newGlyph->depth = depth;

    newGlyph->topLeft.position = glm::vec2(position.x - dimensions.x, position.y + dimensions.y);
    newGlyph->topLeft.color = color;
    newGlyph->topLeft.uv = glm::vec2(0, 1);

    newGlyph->topRight.position = glm::vec2(position.x + dimensions.x, position.y + dimensions.y);
    newGlyph->topRight.color = color;
    newGlyph->topRight.uv = glm::vec2(1, 1);

    newGlyph->bottomRight.position = glm::vec2(position.x + dimensions.x, position.y - dimensions.y);
    newGlyph->bottomRight.color = color;
    newGlyph->bottomRight.uv = glm::vec2(1, 0);

    newGlyph->bottomLeft.position = glm::vec2(position.x - dimensions.x, position.y - dimensions.y);
    newGlyph->bottomLeft.color = color;
    newGlyph->bottomLeft.uv = glm::vec2(0, 0);

    _glyphs.push_back(newGlyph);


}

void SpriteBatch::RenderBatches() {

}

void SpriteBatch::CreateRenderBatches() {

}

void SpriteBatch::CreateVertexArray() {
    if (_vertexArray == 0) {
        glGenVertexArrays(1, &_vertexArray);
    }
    glBindVertexArray(_vertexArray);
    if (_vertexBuffer == 0) {
        glGenBuffers(1, &_vertexBuffer);
    }
    glBindBuffer(GL_ARRAY_BUFFER, _vertexBuffer);

    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (GLvoid *) offsetof(Vertex, position));
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (GLvoid *) offsetof(Vertex, color));
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (GLvoid *) offsetof(Vertex, uv));
    glEnableVertexAttribArray(2);

    glBindVertexArray(0);
}

void SpriteBatch::SortGlyphs() {
    switch (_sortType) {

        case GlyphSortTypes::NONE:
            break;
        case GlyphSortTypes::FRONT_TO_BACK:
            std::sort(_glyphs.begin(), _glyphs.end(), CompareFrontToBack);
            break;
        case GlyphSortTypes::BACK_TO_FRONT:
            std::sort(_glyphs.begin(), _glyphs.end(), CompareBackToFront);
            break;
        case GlyphSortTypes::TEXTURE:
            std::sort(_glyphs.begin(), _glyphs.end(), CompareTextures);
            break;
        default:
            break;

    }
}

bool SpriteBatch::CompareFrontToBack(Glyph *a, Glyph *b) {
    return (a->depth) < (b->depth);
}

bool SpriteBatch::CompareBackToFront(Glyph *a, Glyph *b) {
    return (a->depth) > (b->depth);
}

bool SpriteBatch::CompareTextures(Glyph *a, Glyph *b) {
    return (a->texture) < (b->texture);
}