# src/CMakeLists.txt

file(GLOB SRC "*.cpp" "*.cc")

add_executable(main ${SRC})

target_link_libraries(main PRIVATE ext_opencv)
