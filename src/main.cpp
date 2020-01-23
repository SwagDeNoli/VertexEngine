#include <iostream>

#include <Window.hpp>
#include <Shader.hpp>
#include <Sprite.hpp>

#include <glm/mat4x4.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>
#include <Camera2D.hpp>

std::vector<Sprite *> sprites;

int main() {

    Window window(800, 600, "Test Window", false, false);

    window.SetClearColor(.51f, .51f, .51f);

    Shader shader0("res/shaders/basic.vert", "res/shaders/basic.frag");

    sprites.push_back(new Sprite());
    sprites[0]->Init(0, 0, 100, 100, "res/textures/test.png");

    sprites.push_back(new Sprite());
    sprites[1]->Init(200, 0, 100, 100, "res/textures/test.png");

    Camera2D mainCamera;
    mainCamera.Init(800, 600);

    auto projLoc = glGetUniformLocation(shader0.GetId(), "Projection");

    glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(mainCamera.GetMatrix()));

    float counter = 0.f;
    while (!window.ShouldClose()) {
        window.Clear();

        mainCamera.SetPosition(glm::vec2(sin(counter) * 5, 0));
        mainCamera.Update();

        shader0.Use();
        glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(mainCamera.GetMatrix()));

        for (auto sprite: sprites) {
            sprite->Draw();
        }

        window.Update();
        counter += 0.01f;
    }

    return 0;
}