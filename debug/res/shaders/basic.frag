#version 430 core

out vec4 FragColor;

in vec3 fragColor;
in vec2 UV;

uniform sampler2D Texture;

void main()
{
    FragColor = texture(Texture, UV) * vec4(fragColor, 1);
}