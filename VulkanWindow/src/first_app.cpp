#include "first_app.hpp"

namespace lve {

	void FirstApp::Run()
	{
		while (!lveWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}