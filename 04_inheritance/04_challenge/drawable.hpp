#pragma once

#include <iostream>
#include <vector>
#include <memory>

class Drawable{
    public:
    virtual void draw() const = 0;
};