#include "Window.h"
#include <iostream>
namespace hme {
	namespace core {
		void Window::Init()
		{
			if (!glfwInit()) {
				std::cerr << "Error : Couldn't init glfw" << std::endl;
				exit(-1);
			}
		}
		Window::Window(int width, int height, char* title, graphics::ogl::OpenGLRenderer* onRender) {
			m_Width = width;
			m_Height = height;
			m_Title = title;
			m_Window = glfwCreateWindow(width, height, title, NULL, NULL);
			m_Renderer = onRender;
			if (!m_Window) {
				std::cerr << "Error : Couldn't init window" << std::endl;
				glfwTerminate();
				exit(-1);
			}
			glfwMakeContextCurrent(m_Window);
		}
		void Window::update()
		{
			
			glfwGetWindowSize(m_Window, &m_Width, &m_Height);
			glViewport(0, 0, m_Width, m_Height);
			m_Renderer->renderCall();
			glfwSwapBuffers(m_Window);
			glfwPollEvents();
		}

		bool Window::should_close() const
		{
			return glfwWindowShouldClose(m_Window);
		}
		
		int Window::getWidth() const
		{
			return m_Width;
		}
		int Window::getHeight() const
		{
			return m_Height;
		}
		Window::~Window() {
			glfwTerminate();
		}
	}
}