#include "scene.hpp"

void Scene::add_object(Drawable *obj)
{
    this -> objects.push_back(obj);
}

void Scene::render() const
{
    for (const auto &obj : objects)
    {
        obj->draw();
    }
}