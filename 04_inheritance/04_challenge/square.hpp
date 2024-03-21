#pragma once

#include <iostream>
#include <vector>
#include <memory>

#include "drawable.hpp"
#include "circle.hpp"

class Square: public Drawable{
    public:
    void draw() const override{
        std::cout << "Square" << std::endl;
    };
};

