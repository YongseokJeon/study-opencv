# Top-level CMakeLists.txt

cmake_minimum_required(VERSION 3.2.0)

project(study-opencv VERSION 0.1.0)
message(NOTICE "*** Start ${PROJECT_NAME} configuration")

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(externals)

set(CMAKE_CXX_FLAGS "-Wall")

if (CMAKE_BUILD_TYPE MATCHES Debug) 
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
endif()

add_subdirectory(src)

message(NOTICE "*** End ${PROJECT_NAME} configuration")