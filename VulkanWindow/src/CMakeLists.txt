# Add executables.
add_executable (VulkanWindow "main.cpp" "lve_window.hpp" "lve_window.cpp" "first_app.hpp" "first_app.cpp"  "lve_pipeline.hpp" "lve_device.hpp" "lve_device.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET VulkanWindow PROPERTY CXX_STANDARD 20)
endif()
