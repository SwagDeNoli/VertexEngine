#version 430 core

layout (location = 0) in vec2 vertexPos;
layout (location = 1) in vec3 vertexColor;
layout (location = 2) in vec2 vertexUV;

out vec3 fragColor;
out vec2 UV;

uniform mat4 Transform = mat4(1.0f);

void main()
{
    UV = vertexUV;
    fragColor = vertexColor;
    gl_Position = Transform * vec4(vertexPos, 0, 1.0);
}