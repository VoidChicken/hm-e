#include <iostream>
#include "Window.hpp"
#include "OpenGLRenderer.hpp"
using namespace std;
using namespace hme::core;
using namespace hme::graphics::ogl;
int main(int argc, char* argv) {
	cout << "Starting Hm Engine" << endl;
	Window::Init();
	
	OpenGLRenderer* rdr = new OpenGLRenderer;
	rdr->init();
	Window* win = new Window(1280, 720, "Hm Engine", rdr);
	
	while (!win->should_close()) {
		win->update();
	}

	delete win;
}