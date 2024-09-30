#pragma once
#include <vector>
#include <glm/glm.hpp>

class ImportedModel
{
public:
	ImportedModel(const char* filepath);
private:
	int numVertices;
	std::vector<glm::vec3> vertices;
	std::vector<glm::vec2> texCoords;
	std::vector<glm::vec3> normalVecs;
public:
	inline int getNumVertices() const { return vertices.size(); }
	inline std::vector<glm::vec3> getVertices() const { return vertices; }
	inline std::vector<glm::vec2> getTexCoords() const { return texCoords; }
	inline std::vector<glm::vec3> getNormals() const { return normalVecs; }
};

class ModelImporter
{
public:
	ModelImporter() {}
	void parseOBJ(const char* filepath);
private:
	std::vector<float> vertVals;
	std::vector<float> triangleVerts;
	std::vector<float> textureCoords;
	std::vector<float> stVals;
	std::vector<float> normals;
	std::vector<float> normVals;
public:
	inline int getNumVertices() const { return vertVals.size(); }
	inline std::vector<float> getVertices() const { return vertVals; }
	inline std::vector<float> getTextureCoordinates() const { return textureCoords; }
	inline std::vector<float> getNormals() const { return normals; }
};