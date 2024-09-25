#pragma once
#include <GL/glew.h>
#include <string>
#include <glm/glm.hpp>

using namespace glm;

class Utils
{
public:
	// Shader utility functions
	static GLuint createShaderProgram(const char* vp, const char* fp);
	static GLuint createShaderProgram(const char* vp, const char* gp, const char* fp);
	static GLuint createShaderProgram(const char* vp, const char* tCS, const char* tES, const char* fp);
	static GLuint createShaderProgram(const char* vp, const char* tCS, const char* tES, const char* gp, const char* fp);
	

private:
	static std::string readShaderSource(const char* filePath);
	static void printShaderLog(GLuint shader);
	static void printProgramLog(int prog);
	static bool checkOpenGLError();
};

