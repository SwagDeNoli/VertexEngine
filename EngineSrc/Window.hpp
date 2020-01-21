//
// Created by User2 on 1/14/2020.
//

#include "glad/glad.h"
#include <glfw/glfw3.h>
#include <string>

struct Window {

    Window(int width, int height, const std::string &title, bool fullscreen, bool resizeable);

    ~Window();

    bool ShouldClose();

    void Clear();

    void SetClearColor(float r, float g, float b, float a = 1);

    void Update();

    static void KeyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);

    static void FramebufferSizeCallback(GLFWwindow *window, int width, int height);

    void UpdateFPSCounter(GLFWwindow *window);

private:
    GLFWwindow *_window;

    bool InitGLFW();

    bool InitGLAD();

    void SetCallbacks();
};