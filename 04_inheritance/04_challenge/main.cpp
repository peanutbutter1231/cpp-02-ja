#include "scene.hpp"
#include "circle.hpp"
#include "square.hpp"

int main() {
    Scene scene;

    scene.add_object(new Circle());
    scene.add_object(new Square());

    scene.render();

    return 0;
}