#include <iostream>

#include <Window.hpp>
#include <Shader.hpp>
#include <Sprite.hpp>

#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>

std::vector<Sprite *> sprites;

int main() {

    Window window(800, 600, "Test Window", false, false);

    window.SetClearColor(.51f, .51f, .51f);

    Shader shader0("res/shaders/basic.vert", "res/shaders/basic.frag");

    sprites.push_back(new Sprite());
    sprites[0]->Init(0, 0, 1, 1, "res/textures/test.png");

    glm::mat4 transform(1.f);
    transform = glm::scale(transform, glm::vec3(1, 1, 1));

    //Init systems
    auto transLoc = glGetUniformLocation(shader0.GetId(), "Transform");

    glUniformMatrix4fv(transLoc, 1, GL_FALSE, glm::value_ptr(transform));

    while (!window.ShouldClose()) {
        window.Clear();

        transform = glm::mat4(1.f);
        transform = glm::translate(transform, glm::vec3(1, 0, 0));
        transform = glm::rotate(transform, (float) glfwGetTime() * 1.1f, glm::vec3(0, 0, 1));

        shader0.Use();
        glUniformMatrix4fv(transLoc, 1, GL_FALSE, glm::value_ptr(transform));

        for (auto sprite: sprites) {
            sprite->Draw();
        }

        window.Update();
    }


    return 0;
}
