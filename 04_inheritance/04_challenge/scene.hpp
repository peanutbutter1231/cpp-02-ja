#pragma once

#include <iostream>
#include <vector>
#include <memory>

#include "drawable.hpp"
#include "circle.hpp"
#include "square.hpp"

class Scene{
    public:
    void add_object(Drawable* obj){
        objects.push_back(obj);
    }

    void render() const{
        for(const auto& obj : objects){
            obj->draw();
        }
    }

    private:
    std::vector<Drawable*> objects;
};