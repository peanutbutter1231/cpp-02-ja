#pragma once

#include <iostream>
#include <vector>
#include <memory>

#include "drawable.hpp"
#include "circle.hpp"
#include "square.hpp"

class Scene{
    public:
    void add_object(std::unique_ptr<Drawable> obj){
        objects.push_back(std::move(obj));
    }

    void render() const{
        for(const auto& obj : objects){
            obj->draw();
        }
    }

    private:
    std::vector<std::unique_ptr<Drawable>> objects;
};