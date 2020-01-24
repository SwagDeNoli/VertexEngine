//
// Created by User2 on 1/14/2020.
//

#include "glad/glad.h"
#include <glfw/glfw3.h>
#include <string>
#include <glm/vec2.hpp>

#define MAX_KEYS 1024
#define MAX_BUTTONS 32

struct Window {

    Window(int width, int height, const std::string &title, bool fullscreen, bool resizeable);

    ~Window();

    bool ShouldClose();

    void Clear();

    void SetClearColor(float r, float g, float b, float a = 1);

    void Update();

    bool IsKeyPressed(unsigned int keycode);

    bool IsMouseButtonPressed(unsigned int keycode);

    glm::vec2 GetMousePosition();

private:
    GLFWwindow *_window;

    double mouseX, mouseY;

    bool keys[MAX_KEYS];
    bool mouseButtons[MAX_BUTTONS];

    bool InitGLFW();

    bool InitGLAD();

    static void KeyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);

    static void MousePositionCallback(GLFWwindow *window, double xpos, double ypos);

    static void MouseButtonCallback(GLFWwindow *window, int button, int action, int mods);

    static void FramebufferSizeCallback(GLFWwindow *window, int width, int height);

    void SetCallbacks();

    void UpdateFPSCounter(GLFWwindow *window);

    static void APIENTRY glDebugOutput(GLenum source, GLenum type, GLuint id, GLenum severity,
                                       GLsizei length, const GLchar *message, void *userParam);
};