// Copyright (c) 2022 Paterry Baptichon All rights reserved

// Created by Paterry Baptichon
// Created on 2022-05-22
// This program rounds off a number

#include <iostream>
#include <string>
#include <cmath>

void RoundingCalculator(float &NumberToRound, float &DecimalPlaces) {
    // this function returns the rounded off number
    int intProcess;

    NumberToRound = (NumberToRound*pow(10, DecimalPlaces));
    intProcess = (int(NumberToRound + 0.5));
    DecimalPlaces = intProcess *pow(10, -DecimalPlaces);
}


main() {
    // gets the number to round off and decimal places

    std::string userNumberToRound;
    std::string userDecimalPlaces;
    float intNumberToRound;
    float intDecimalPlaces;

    // input of the user's rounded number
    std::cout << "Enter the number you want to round: ";
    std::cin >> userNumberToRound;
    std::cout << "Enter how many decimal places you want to round by: ";
    std::cin >> userDecimalPlaces;
    std::cout << "\n" << std::endl;

    try {
        intNumberToRound = std::stof(userNumberToRound.c_str());
        intDecimalPlaces = std::stof(userDecimalPlaces.c_str());

        if (intNumberToRound > 0 && intDecimalPlaces >= 0) {
            // call functions
            RoundingCalculator(intNumberToRound, intDecimalPlaces);
            // output of user's rounded number with decimal place
            std::cout << "The rounded number is " << intDecimalPlaces << std::endl;
        } else {
            std::cout << "The values should be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "This is not a number" << std::endl;
    }
}
