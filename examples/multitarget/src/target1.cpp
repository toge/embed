
#include <iostream>
#include "battery/embed.hpp"

int main() {
    std::cout << std::endl << "[main.cpp] This is: resources/message.txt from target1" << std::endl;
    std::cout << b::embed<"resources/message.txt">() << std::endl;

    std::cout << std::endl << "[main.cpp] This is: resources/FirstFolder/config.json from target1" << std::endl;
    std::cout << b::embed<"resources/FirstFolder/config.json">() << std::endl;

    return 0;
}