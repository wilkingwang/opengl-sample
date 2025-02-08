cmake_minimum_required(VERSION 3.9)

include_directories(X_EXTERNAL_DIR/glfw/include)
if (${CMAKE_SYSTEM_NAME} STREQUAL Linux)
	set(OpenGL_LIB
		debug
		${X_EXTERNAL_DIR}/glfw/lib/debug/libglfw3.a
		optimized
		${X_EXTERNAL_DIR}/glfw/lib/release/libglfw3.a
	)
else()
endif()

set(LIB_DEPENDENCY ${OpenGL_LIB})

add_example(WindowDemo "" LIB_DEPENDENCY)

target_link_directories(${PROJECT_NAME} PUBLIC include ${CUDA_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} dl pthread GL GLU glut)
