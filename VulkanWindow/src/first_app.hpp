#pragma once

#include "lve_window.hpp"
#include "lve_pipeline.hpp"

namespace lve {

	class FirstApp {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void Run();

	private:
		LveWindow lveWindow{ WIDTH, HEIGHT, "Hello Vulky" };
		LvePipeline lvePipeline{ "C:/Users/ReinV/Personal/Coding/C++/Projects/VulkanWindow/src/Shaders/simple_shader.vert.spv", "C:/Users/ReinV/Personal/Coding/C++/Projects/VulkanWindow/src/Shaders/simple_shader.frag.spv"};
	};

}