#pragma once

#include <iostream>
#include <vector>
#include <memory>

#include "drawable.hpp"
#include "square.hpp"

class Circle: public Drawable{
    public:
    void draw() const override{
        std::cout << "Circle" << std::endl;
    }
};