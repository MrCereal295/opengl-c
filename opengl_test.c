// This will be my first time using OpenGL to make something

#include <GLAD/glad.c>
#include <GLFW/include/GLFW/glfw3.h>
#include<stdio.h>


int main() {
    // Makes sure GLFW initializes properly
    if(!glfwInit()){
        return -1;
    }
    // Tells GLFW what version of OpenGL you're using (make sure its the same one that your graphics machine can run)
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    // Tell GLFW that we're using the CORE profile (contains the modern functions without the deprecated ones)
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Creates an 800x800 window
    GLFWwindow* window = glfwCreateWindow(800, 800, "this is a test", NULL, NULL);

    // Makes sure the window was created properly
    if (window == NULL) {
        printf("There was an error in creating the window! idk what tho\n");
        glfwTerminate();
        return -1;
    }

    // Places our window into the current context
    glfwMakeContextCurrent(window);

    // Loads GLAD
    gladLoadGL();
    // Specifies the viewport of OpenGL in the window
    glViewport(0, 0, 800, 800);
    // Specifies the color of the background
    glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
    // Clean the back buffer and assign the new color to it
    glClear(GL_COLOR_BUFFER_BIT);
    // Swap the back buffer with the front buffer
    glfwSwapBuffers(window);

    // Keeps the window open until closed (without this the window closes immediately after opening)
    while (!glfwWindowShouldClose(window)) {
        // Handles all GLFW events
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}