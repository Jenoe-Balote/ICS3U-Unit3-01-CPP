// Copyright (c) 2021 Jenoe Balote All rights reserved
//
// Created by Jenoe Balote
// Created on April 2021
// This program calculates the sum of two numbers

#include <iostream>
#include <cmath>

int main() {
    // variable declarations
    int number1;
    int number2;
    int sum;

    // input
    std::cout << "Time to add up some numbers!" << std::endl;
    std::cout << "Follow the prompts down below:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter your first number: " << std::endl;
    std::cin >> number1;
    std::cout << "Enter your second number: " << std::endl;
    std::cin >> number2;

    // process
    sum = number1 + number2;

    // output
    std::cout << "" << std::endl;
    std::cout << "The sum of the numbers is " << sum << std::endl;
}
