//
// Created by User2 on 1/14/2020.
//

#include <iostream>
#include "Window.hpp"

Window::Window(int width, int height, const std::string &title, bool fullscreen, bool resizeable) : _window(nullptr) {
    if (!InitGLFW()) {
        std::cout << "Error! GLFW could not init" << std::endl;
    }

    if (resizeable) {
        glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
    } else {
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    }

    if (fullscreen) {
        _window = glfwCreateWindow(width, height, title.c_str(), glfwGetPrimaryMonitor(), nullptr);

    } else {
        _window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
    }

    if (!_window) {
        std::cout << "Error! A GLFW window could not be created" << std::endl;
    }

    glfwMakeContextCurrent(_window);
    if (!InitGLAD()) {
        std::cout << "Error! GLAD could not init" << std::endl;
        glfwTerminate();
    }
    glfwSwapInterval(1);
    SetCallbacks();
};

Window::~Window() {
    glfwDestroyWindow(_window);
    glfwTerminate();
}

bool Window::InitGLFW() {
    return glfwInit();
}

bool Window::InitGLAD() {
    return gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);
}

bool Window::ShouldClose() {
    return glfwWindowShouldClose(_window);
}

void Window::KeyCallback(GLFWwindow *window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
}

void Window::SetCallbacks() {
    glfwSetKeyCallback(_window, KeyCallback);
    glfwSetFramebufferSizeCallback(_window, FramebufferSizeCallback);
}

void Window::Clear() {
    glClear(GL_COLOR_BUFFER_BIT);
}

void Window::SetClearColor(float r, float g, float b, float a) {
    glClearColor(r, g, b, a);
}

void Window::Update() {
    glfwSwapBuffers(_window);
    glfwPollEvents();
    UpdateFPSCounter(_window);
}

void Window::FramebufferSizeCallback(GLFWwindow *window, int width, int height) {
    glViewport(0, 0, width, height);
}

void Window::UpdateFPSCounter(GLFWwindow *window) {

    static double previous_seconds = glfwGetTime();
    static int frame_count;
    double current_seconds = glfwGetTime();
    double elapsed_seconds = current_seconds - previous_seconds;
    if (elapsed_seconds > 0.25) {
        previous_seconds = current_seconds;
        double fps = (double) frame_count / elapsed_seconds;
        char tmp[128];
        sprintf(tmp, "opengl @ fps: %.2f", fps);
        glfwSetWindowTitle(window, tmp);
        frame_count = 0;
    }
    frame_count++;

}
