// Copyright (c) 2026 Deepak V rights reserved
// Created by: Deepak V
// Date: Oct. 15, 2026
// This program asks the user to input an integer
// if it's positive, negative or a zero
#include <iostream>

int main() {
    int numChosen;
// input your integer
    std::cout << "Enter an integer: ";
    std::cin >> numChosen;
// Entering a positive number will display "Your number is positive"
    if (numChosen > 0) {
        std::cout << "Your number is positive\n";
// Entering a negative number will display "Your number is negative"
    } else if (numChosen < 0) {
        std::cout << "Your number is negative\n";
// Entering zero will display "Your number is zero"
    } else if (numChosen == 0) {
        std::cout << "Your number is zero\n";
    }
