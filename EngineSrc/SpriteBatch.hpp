//
// Created by user2 on 1/23/2020.
//

#pragma once

#include <glad/glad.h>
#include <Vertex.hpp>
#include <glm/vec4.hpp>
#include <vector>

enum class GlyphSortTypes {
    NONE,
    FRONT_TO_BACK,
    BACK_TO_FRONT,
    TEXTURE
};

struct Glyph {

    GLuint texture;
    float depth;

    Vertex topLeft;
    Vertex topRight;
    Vertex bottomLeft;
    Vertex bottomRight;
};

struct RenderBatch {

    RenderBatch(GLuint offSet, GLuint numOfVerts, GLuint textureId) : offset(offSet), numOfVertices(numOfVerts),
                                                                      texture(textureId) {

    }

    GLuint offset;
    GLuint numOfVertices;
    GLuint texture;
};

struct SpriteBatch {

    SpriteBatch();

    ~SpriteBatch();

    void Init();

    void Begin(GlyphSortTypes sortType = GlyphSortTypes::TEXTURE);

    void End();

    void Draw(const glm::vec2 &position, const glm::vec2 &dimensions, const GLuint &texture, const float &depth,
              const glm::vec3 &color);

    void RenderBatches();

private:
    void CreateRenderBatches();

    void CreateVertexArray();

    void SortGlyphs();

    GLuint _vertexArray;
    GLuint _vertexBuffer;

    GlyphSortTypes _sortType;

    static bool CompareFrontToBack(Glyph *a, Glyph *b);

    static bool CompareBackToFront(Glyph *a, Glyph *b);

    static bool CompareTextures(Glyph *a, Glyph *b);

    std::vector<Glyph *> _glyphs;
    std::vector<RenderBatch> _renderBatches;
};