#pragma once
#include <GLFW\glfw3.h>
namespace hme {
	namespace core {
		class Window {
		public:
			typedef void(*RENDER_EVENT)();
		protected: 
			int m_Width;
			int m_Height;
			char* m_Title;
			GLFWwindow* m_Window;
			RENDER_EVENT OnRender;
		public:
			static void Init();
			Window(int width, int height, char* title, RENDER_EVENT onRender);
			void update();
			bool should_close() const;
			int getWidth() const;
			int getHeight() const;
			~Window();
		};
	}
}