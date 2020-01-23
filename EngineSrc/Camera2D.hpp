//
// Created by User2 on 1/18/2020.
//

#pragma once

#include <glm/glm.hpp>

struct Camera2D {

    Camera2D();

    ~Camera2D();

    void Init(int screenWidth, int screenHeight);

    void Update();

    inline void SetPosition(const glm::vec2 &newPosition) {
        _position = newPosition;
        _update = true;
    }

    inline void SetScale(float newScale) {
        _scale = newScale;
        _update = true;
    }

    inline glm::mat4 GetMatrix() {
        return _cameraMatrix;
    }

    inline glm::vec2 GetPosition() {
        return _position;
    }

    inline float GetScale() {
        return _scale;
    }

private:
    int _screenWidth, _screenHeight;
    glm::vec2 _position;
    float _scale;
    glm::mat4 _cameraMatrix;
    glm::mat4 _orthoMatrix;
    bool _update;
};