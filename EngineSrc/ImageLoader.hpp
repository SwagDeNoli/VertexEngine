//
// Created by User2 on 1/16/2020.
//

#include <Utility/stb_image.h>
#include <string>
#include <Texture2D.hpp>

struct ImageLoader {

    static Texture2D LoadImage(const std::string &imagePath);

};