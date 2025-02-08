#include <iostream>

#include <GL/gl.h>
#include <GLFW/glfw3.h>

int main(int argc, char *argv[])
{
    GLFWwindow* window;

    if (!glfwInit())
    {
        return EXIT_FAILURE;
    }

    window = glfwCreateWindow(600, 480, "Hello World", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return EXIT_FAILURE;
    }

    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);

        glfwPollEvents();
    }

    glfwTerminate();
	return 0;
}
