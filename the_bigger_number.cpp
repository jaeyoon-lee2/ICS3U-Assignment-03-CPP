// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program uses a try statement

#include <iostream>
#include <string>

main() {
    // this function uses a try statement
    std::string integer1AsString;
    std::string integer2AsString;
    int integer1AsNumber;
    int integer2AsNumber;


    // input
    std::cout << "Enter the first number (integer): ";
    std::cin >> integer1AsString;
    std::cout << "Enter the second number (integer): ";
    std::cin >> integer2AsString;

    // process & output
    try {
        integer1AsNumber = std::stoi(integer1AsString);
        integer2AsNumber = std::stoi(integer2AsString);
        if (integer1AsNumber > integer2AsNumber) {
            std::cout << "The first number (" << integer1AsNumber
                      << ") is bigger than second number ("
                      << integer2AsNumber << ")." << std::endl;
        } else if (integer1AsNumber < integer2AsNumber) {
        std::cout << "The second number (" << integer2AsNumber
                  << ") is bigger than first number (" << integer1AsNumber
                  << ")." << std::endl;
        } else {
            std::cout << "Those numbers are the same." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer";
    }
}
