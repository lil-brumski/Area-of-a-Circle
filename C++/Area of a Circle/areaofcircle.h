#ifndef AREA_OF_CIRCLE
#define AREA_OF_CIRCLE

#include <iostream>
#include <string>
#include <limits>

template <class T>
T getInput(const std::string& prompt) {
    T value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) {
            break; // Exit loop if input is successful
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "\nWrong input. Please enter a valid value.\n" << std::endl;
        }
    }
    return value;
}

#endif