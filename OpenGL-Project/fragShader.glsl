#version 430

in vec4 varyingColor;
out vec4 color;

uniform mat4 v_matrix;
uniform mat4 proj_matrix;
uniform float tf;

void main(void)
{
	color = varyingColor;
}