# src/CMakeLists.txt

file(GLOB SRC "*.cpp" "*.cc")

add_executable(main ${SRC})

set_target_properties(main PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
