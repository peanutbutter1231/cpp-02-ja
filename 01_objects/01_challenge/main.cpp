#include "traffic_light.h"
#include <iostream>
#include <string>

int main() {
    std::string action = get_action(TrafficLight::green);
    std::cout << "Current traffic light action: " << action << std::endl;
    return 0;
}