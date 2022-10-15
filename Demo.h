#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>
#include <vector>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();

	glm::vec3 movement_read = glm::vec3(0, 0, 0);
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;

	//Declare New Variables Here
	glm::vec3 movement = glm::vec3(0, 0, 0);
	int counter_bezier = 0;
	int max_counter = 3000;
	int freq = 0;

	bool flag_doReverse = false;
	std::vector<glm::vec3> point_array;

	float angle = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredCube();
	void BuildColoredPlane();
	void DrawColoredCube();
	void DrawColoredCube2();
	void DrawColoredPlane();

	void DrawHeliBody();
	void DrawHeliTail();
	void DrawHeadSpinner();
	void DrawTailSpinner();
};

