#include "OpenGLRenderer.hpp"
#include "GL\glew.h"
void hme::graphics::ogl::OpenGLRenderer::render()
{
	glOrtho(-1, 1, -1, 1, -10, 10);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glFlush();
}
void hme::graphics::ogl::OpenGLRenderer::init()
{
	
}