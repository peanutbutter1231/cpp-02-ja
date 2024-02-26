#include "traffic_light.h"
#include <string>

std::string get_action(TrafficLight light) {
    switch (light) {
        case TrafficLight::red:
            return "Stop";
        case TrafficLight::yellow:
            return "Caution";
        case TrafficLight::green:
            return "Go";
        default:
            return "Unknown"; // 未知の信号色
    }
}