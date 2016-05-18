#include "OpenGLRenderer.h"
#include "GL\glew.h"
void hme::graphics::ogl::OpenGLRenderer::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glVertex2f(0, 0);
	glVertex2f(.5f, 1);
	glVertex2f(1, 0);
	glEnd();
	glFlush();
}
