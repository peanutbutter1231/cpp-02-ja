#include <iostream>
#include <vector>
#include <memory>

#include "drawable.hpp"
#include "circle.hpp"
#include "square.hpp"
#include "scene.hpp"

int main() {
    Scene scene;

    Circle circle1;
//    circle1.draw();

    scene.add_object(circle1* );
//    scene.add_object(std::make_unique<Square>());

    scene.render();

    return 0;
}