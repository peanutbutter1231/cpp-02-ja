#include <string>
#include <iostream>

#include "logger.hpp"

void Logger::logMessage(std::string const& m){
    std::cout << m << std::endl;
}
