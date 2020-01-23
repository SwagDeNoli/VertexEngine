#version 430 core

layout (location = 0) in vec3 vertexPos;
layout (location = 1) in vec3 vertexColor;
layout (location = 2) in vec2 vertexUV;

out vec3 fragColor;
out vec2 UV;

uniform mat4 Projection = mat4(1.0f);


void main()
{
    UV = vertexUV;
    fragColor = vertexColor;

    gl_Position = Projection * vec4(vertexPos.xyz, 1.0);
    gl_Position.z = 0;
}