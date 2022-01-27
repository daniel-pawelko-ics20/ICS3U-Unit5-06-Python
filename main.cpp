// Copyright (c) 2022 Daniel Pawelko all rights reserved

// Created by Daniel Pawelko
// Created on Jan 2022
// Round

#include <iostream>
#include <cmath>


void round_func(float &num, int round_to) {
    // round number

    // process
    num = ((static_cast<int>(num * pow(10, round_to) + 0.5))
                 / pow(10, round_to));
}

int main() {
    // main function, calling round_func

    float inp;
    int round_to;

    try {
        // input
        std::cout << "Enter number to round decimals: ";
        std::cin >> inp;
        std::cout << "Round to: ";
        std::cin >> round_to;

        if (round_to > 0) {
            round_func(inp, round_to);
            std::cout << "The number is " << inp << std::endl;
        } else {
            std::cout << "Round to number must be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a number" << std::endl;
    }
}
