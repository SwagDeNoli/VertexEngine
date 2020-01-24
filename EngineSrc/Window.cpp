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

    glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_TRUE);

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

    GLint flags;
    glGetIntegerv(GL_CONTEXT_FLAGS, &flags);
    if (flags & GL_CONTEXT_FLAG_DEBUG_BIT) {
        // initialize debug output
    }

    if (flags & GL_CONTEXT_FLAG_DEBUG_BIT) {
        glEnable(GL_DEBUG_OUTPUT);
        glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS);
        glDebugMessageCallback(reinterpret_cast<GLDEBUGPROC>(glDebugOutput), nullptr);
        glDebugMessageControl(GL_DONT_CARE, GL_DONT_CARE, GL_DONT_CARE, 0, nullptr, GL_TRUE);
    }

    for (bool &key : keys) {
        key = false;
    }
    for (bool &mouseButton : mouseButtons) {
        mouseButton = false;
    }
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

bool wireframe = false;

void Window::KeyCallback(GLFWwindow *window, int key, int scancode, int action, int mods) {

    auto *win = (Window *) glfwGetWindowUserPointer(window);

    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    if (key == GLFW_KEY_1 && action == GLFW_PRESS) {
        wireframe = !wireframe;
        if (wireframe) {
            glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
        } else {
            glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
        }
    }


    win->keys[key] = (action != GLFW_RELEASE);
}

void Window::MousePositionCallback(GLFWwindow *window, double xpos, double ypos) {

    auto *win = (Window *) glfwGetWindowUserPointer(window);

    win->mouseX = xpos;
    win->mouseY = xpos;
}

void Window::MouseButtonCallback(GLFWwindow *window, int button, int action, int mods) {
    auto *win = (Window *) glfwGetWindowUserPointer(window);

    win->mouseButtons[button] = (action != GLFW_RELEASE);
}

void Window::FramebufferSizeCallback(GLFWwindow *window, int width, int height) {

    Window *win = (Window *) glfwGetWindowUserPointer(window);

    glViewport(0, 0, width, height);
}


void Window::SetCallbacks() {
    glfwSetWindowUserPointer(_window, this);
    glfwSetKeyCallback(_window, KeyCallback);
    glfwSetCursorPosCallback(_window, MousePositionCallback);
    glfwSetMouseButtonCallback(_window, MouseButtonCallback);
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

void
Window::glDebugOutput(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *message,
                      void *userParam) {
    // ignore non-significant error/warning codes
    if (id == 131169 || id == 131185 || id == 131218 || id == 131204) return;

    std::cout << "---------------" << std::endl;
    std::cout << "Debug message (" << id << "): " << message << std::endl;

    switch (source) {
        case GL_DEBUG_SOURCE_API:
            std::cout << "Source: API";
            break;
        case GL_DEBUG_SOURCE_WINDOW_SYSTEM:
            std::cout << "Source: Window System";
            break;
        case GL_DEBUG_SOURCE_SHADER_COMPILER:
            std::cout << "Source: Shader Compiler";
            break;
        case GL_DEBUG_SOURCE_THIRD_PARTY:
            std::cout << "Source: Third Party";
            break;
        case GL_DEBUG_SOURCE_APPLICATION:
            std::cout << "Source: Application";
            break;
        case GL_DEBUG_SOURCE_OTHER:
            std::cout << "Source: Other";
            break;
    }
    std::cout << std::endl;

    switch (type) {
        case GL_DEBUG_TYPE_ERROR:
            std::cout << "Type: Error";
            break;
        case GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR:
            std::cout << "Type: Deprecated Behaviour";
            break;
        case GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR:
            std::cout << "Type: Undefined Behaviour";
            break;
        case GL_DEBUG_TYPE_PORTABILITY:
            std::cout << "Type: Portability";
            break;
        case GL_DEBUG_TYPE_PERFORMANCE:
            std::cout << "Type: Performance";
            break;
        case GL_DEBUG_TYPE_MARKER:
            std::cout << "Type: Marker";
            break;
        case GL_DEBUG_TYPE_PUSH_GROUP:
            std::cout << "Type: Push Group";
            break;
        case GL_DEBUG_TYPE_POP_GROUP:
            std::cout << "Type: Pop Group";
            break;
        case GL_DEBUG_TYPE_OTHER:
            std::cout << "Type: Other";
            break;
    }
    std::cout << std::endl;

    switch (severity) {
        case GL_DEBUG_SEVERITY_HIGH:
            std::cout << "Severity: high";
            break;
        case GL_DEBUG_SEVERITY_MEDIUM:
            std::cout << "Severity: medium";
            break;
        case GL_DEBUG_SEVERITY_LOW:
            std::cout << "Severity: low";
            break;
        case GL_DEBUG_SEVERITY_NOTIFICATION:
            std::cout << "Severity: notification";
            break;
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

bool Window::IsKeyPressed(unsigned int keycode) {
    if (keycode >= MAX_KEYS)
        return false;
    return keys[keycode];
}

bool Window::IsMouseButtonPressed(unsigned int keycode) {
    if (keycode >= MAX_BUTTONS)
        return false;
    return mouseButtons[keycode];
}

glm::vec2 Window::GetMousePosition() {
    return glm::vec2(mouseX, mouseY);
}




