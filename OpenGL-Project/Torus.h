#pragma once
#include <cmath>
#include <vector>
#include <glm/glm.hpp>
class Torus
{
public:
	Torus(float inner, float outer, int prec);
	inline int const getNumVertices() { return numVertices; }
	inline int const getNumIndices() { return numIndices; }
	inline std::vector<int> const getIndices() { return indices; }
	inline std::vector<glm::vec3> const getVertices() { return vertices; }
	inline std::vector<glm::vec2> const getTexCoords() { return texCoords; }
	inline std::vector<glm::vec3> const getNormals() { return normals; }
	inline std::vector<glm::vec3> const getStangents() { return sTangents; }
	inline std::vector<glm::vec3> const getTtangents() { return tTangents; }
private:
	int numVertices;
	int numIndices;
	int prec;
	float inner;
	float outer;
	std::vector<int> indices;
	std::vector<glm::vec3> vertices;
	std::vector<glm::vec2> texCoords;
	std::vector<glm::vec3> normals;
	std::vector<glm::vec3> sTangents;
	std::vector<glm::vec3> tTangents;
	void init();
	float toRadians(float degrees);
};

