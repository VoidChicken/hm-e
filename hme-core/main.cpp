#include <iostream>
#include "Window.h"
#include "OpenGLRenderer.h"
using namespace std;
using namespace hme::core;
using namespace hme::graphics::ogl;
int main(int argc, char* argv) {
	cout << "Starting Hm Engine" << endl;
	Window::Init();
	
	OpenGLRenderer* rdr = new OpenGLRenderer;
	Window::RENDER_EVENT re = (*rdr).Render;
	Window* win = new Window(1280, 720, "Hm Engine", re);
	
	while (!win->should_close()) {
		win->update();
	}

	delete win;
}