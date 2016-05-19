#pragma once
#include "Renderer.hpp"
namespace hme {
	namespace graphics {
		namespace ogl {
			class OpenGLRenderer final : public Renderer {
			protected:
				virtual void render();
			public:
				virtual void init();
			};
		}
	}
}