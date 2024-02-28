#include <iostream>
#include "rectangle.h"

int main() {
    Rectangle myRectangle;
    myRectangle.width = 5.0;
    myRectangle.height = 3.0;

    float area = rectangle_area(myRectangle);
    std::cout << "Rectangle area: " << area << std::endl;

    return 0;
}
