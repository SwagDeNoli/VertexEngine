cmake_minimum_required(VERSION 3.15)
project(2DEngine)

set(CMAKE_CXX_STANDARD 17)

add_library(VertexEngine STATIC
        EngineSrc/glad/glad.h
        EngineSrc/KHR/khrplatform.h
        EngineSrc/glad.c
        EngineSrc/Vertex.hpp EngineSrc/Vertex.cpp
        EngineSrc/Window.cpp EngineSrc/Window.hpp
        EngineSrc/Sprite.cpp EngineSrc/Sprite.hpp
        EngineSrc/Shader.cpp EngineSrc/Shader.hpp
        EngineSrc/IOManager.cpp EngineSrc/IOManager.hpp
        EngineSrc/ImageLoader.cpp EngineSrc/ImageLoader.hpp
        EngineSrc/Utility/stb_image.h EngineSrc/Utility/stb_image.cpp
        EngineSrc/Texture2D.cpp EngineSrc/Texture2D.hpp
        EngineSrc/Camera2D.cpp EngineSrc/Camera2D.hpp
        EngineSrc/TextureCache.cpp EngineSrc/TextureCache.hpp
        EngineSrc/ResourceManager.cpp EngineSrc/ResourceManager.hpp
        EngineSrc/SpriteBatch.cpp EngineSrc/SpriteBatch.hpp
        )

include_directories(EngineSrc)

add_executable(2DEngine src/main.cpp src/MainGame.cpp src/MainGame.hpp)
target_link_libraries(2DEngine PRIVATE VertexEngine glfw3)