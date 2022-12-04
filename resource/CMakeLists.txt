# resource/CMakeLists.txt

file(GLOB RESOURCES
  "${CMAKE_CURRENT_SOURCE_DIR}/*.*"
)

file(COPY ${RESOURCES} DESTINATION ${CMAKE_BINARY_DIR}/resource/)