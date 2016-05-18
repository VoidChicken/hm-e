#pragma once

namespace hme {
	namespace graphics {
		class Renderer {
		protected:
			 virtual void render() = 0;
		public:
			void renderCall();
		};
	}
}