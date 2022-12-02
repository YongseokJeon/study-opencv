# externals/CMakeLists.txt

message(NOTICE "****** Start externals project configuration")

# TODO: Use ExternalProject_add

set(OpenCV_DIR ${CMAKE_CURRENT_SOURCE_DIR}/out)

message(STATUS "OpenCV_DIR: ${OpenCV_DIR}")

find_package(OpenCV REQUIRED)

add_library(ext_opencv INTERFACE)
target_link_libraries(ext_opencv INTERFACE ${OpenCV_LIBRARIES})
target_include_directories(ext_opencv INTERFACE ${OpenCV_INCLUDE_DIRS})

message(NOTICE "****** End externals project configuration")
