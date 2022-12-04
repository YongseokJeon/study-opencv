# src/CMakeLists.txt

file(GLOB SRC "*.cpp" "*.cc")

add_executable(main ${SRC})

target_link_libraries(main PRIVATE ext_opencv)

set_target_properties(main PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)
