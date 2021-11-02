// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This is program

#include <iostream>
#include <string>

main() {
    std::string integer1;
    std::string integer2;
    float number1;
    float number2;

    // input
    std::cout << "Enter the first number: ";
    std::cin >> integer1;
    std::cout << "Enter the second number: ";
    std::cin >> integer2;

    // process & output
    try {
        number1 = std::stof(integer1);
        number2 = std::stof(integer2);
        if (number1 == number2) {
            std::cout << number1 << " = " << number2 << std::endl;
        } else if (number1 < number2) {
            std::cout << number1 << " < " << number2 << std::endl;
        } else {
            std::cout << number1 << " > " << number2 << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "This was not a number" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
