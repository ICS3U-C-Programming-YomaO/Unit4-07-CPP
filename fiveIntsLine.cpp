// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : November, 2025
// This program counts from 1000 to 2000
// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//
#include <iostream>
int main() {
    // Print numbers from 1000 to 2000, 5 per line

    for (int year = 1000; year <= 2000; year++) {
        std::cout << year << " ";

        // Move to a new line after 5 numbers
        if (year % 5 == 0) {
            std::cout << std::endl;
        }
    }

    // Thank you end message

    std::cout << "\nThanks for playing" << std::endl;
}
