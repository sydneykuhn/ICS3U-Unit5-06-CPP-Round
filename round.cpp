// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program rounds a number

#include <iostream>
#include <cmath>

float RoundNumber(float &fUserNumber, int &iRoundBy) {
    // function adds 1, by reference
    float temp;

    temp = ((fUserNumber * (pow(10, iRoundBy))) + 0.5);
    temp = (static_cast<int>(temp));
    temp = (temp / (pow(10, iRoundBy)));

    fUserNumber = temp;
}

main() {
    // this function gets a number and calls the AddOne function
    std::string sUserNumber;
    std::string sRoundBy;
    float fUserNumber;
    int iRoundBy;
    int iUserNumber;
    float iRoundedNumber;

    // input
    std::cout << "Enter the number you want to round : ";
    std::cin >> sUserNumber;
    std::cout << "Enter how many decimal places you want to round by : ";
    std::cin >> sRoundBy;

    try {
        fUserNumber = std::stof(sUserNumber);
        iRoundBy = std::stoi(sRoundBy);
        // call functions
        RoundNumber(fUserNumber, iRoundBy);
        std::cout << "\nThe rounded number is " << fUserNumber;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid number entered, please try again." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
