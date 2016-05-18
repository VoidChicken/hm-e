#pragma once
#include <GLFW\glfw3.h>
#include "OpenGLRenderer.h"
namespace hme {
	namespace core {
		class Window {
		protected: 
			int m_Width;
			int m_Height;
			char* m_Title;
			GLFWwindow* m_Window;
			graphics::ogl::OpenGLRenderer* m_Renderer;
		public:
			static void Init();
			Window(int width, int height, char* title, graphics::ogl::OpenGLRenderer* renderer);
			void update();
			bool should_close() const;
			int getWidth() const;
			int getHeight() const;
			~Window();
		};
	}
}