#version 410

layout(location = 0) in vec3 inPos;
layout(location = 1) in vec3 inColor;
layout(location = 2) in vec3 inNormal;
layout(location = 3) in vec2 inUV;

out vec4 frag_color;

void main()
{
	frag_color = vec4(inColor, 1);
}