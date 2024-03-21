#include <iostream>
#include <vector>
#include <memory>

#include "drawable.hpp"
#include "circle.hpp"
#include "square.hpp"
#include "scene.hpp"

int main() {
    Scene scene;
    scene.add_object(std::make_unique<Circle>());
    scene.add_object(std::make_unique<Square>());

    scene.render();

    return 0;
}