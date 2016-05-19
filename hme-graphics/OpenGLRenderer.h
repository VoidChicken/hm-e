#pragma once
#include "Renderer.h"
namespace hme {
	namespace graphics {
		namespace ogl {
			class OpenGLRenderer final : public Renderer {
			protected:
				virtual void render();
				virtual void init();
			};
		}
	}
}