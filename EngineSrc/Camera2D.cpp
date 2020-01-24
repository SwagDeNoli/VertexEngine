//
// Created by User2 on 1/18/2020.
//

#include <glm/gtc/matrix_transform.hpp>
#include "Camera2D.hpp"

Camera2D::Camera2D() : _position(0.f, 0.f), _scale(1.f), _cameraMatrix(1.f), _update(true), _screenWidth(800),
                       _screenHeight(600), _orthoMatrix(1.f) {
    Init(_screenWidth, _screenHeight);
}

Camera2D::~Camera2D() {

}

void Camera2D::Init(int screenWidth, int screenHeight) {
    _screenWidth = screenWidth;
    _screenHeight = screenHeight;

    _orthoMatrix = glm::ortho(-(_screenWidth / 2.0f), (_screenWidth / 2.0f), -(_screenHeight / 2.0f),
                              (_screenHeight / 2.0f), -1.f, 100.f);
}

void Camera2D::Update() {
    if (_update) {
        glm::vec3 translate(-_position.x, -_position.y, 0.f);
        glm::vec3 scale(_scale, _scale, 0.f);

        _cameraMatrix = glm::scale(_cameraMatrix, scale);
        _cameraMatrix = glm::translate(_orthoMatrix, translate);
        _update = false;
    }
}

