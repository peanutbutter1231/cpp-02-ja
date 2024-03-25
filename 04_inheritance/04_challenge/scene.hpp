#pragma once

#include <vector>

#include "drawable.hpp"

class Scene
{
public:
    void add_object(Drawable *obj);
    void render() const;

private:
    std::vector<Drawable *> objects;
};