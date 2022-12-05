# src/CMakeLists.txt

########
# main
########
# file(GLOB SRC "*.cpp" "*.cc")
set(MAIN_SRC main.cpp)

add_executable(main ${MAIN_SRC})

target_link_libraries(main PRIVATE ext_opencv)

set_target_properties(main PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)

########
# dnn_superres_example
########
set(DNN_SUPERRES_SRC dnn_superres_example.cpp)

add_executable(dnn_superres_example ${DNN_SUPERRES_SRC})

target_link_libraries(dnn_superres_example PRIVATE ext_opencv)

set_target_properties(dnn_superres_example PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)
