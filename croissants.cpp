// Copyright (c) 2022 Lucas DeBruyn All rights reserved.
//
// Created by: Lucas DeBruyn
// Created on: Oct 2022
// This program calculates the cost of croissants

#include <iomanip>
#include <iostream>

int main() {
    // This function calculates the cost of a croissants
    const float COST_PER_CROISSANTS = 2.55;
    const float HST = 0.13;
    const float MAGIC_NUMBER = 6;

    float amount;
    float sub_total;
    float total;

    // Input
    std::cout << "Enter the amount of croissants you would like: ";
    std::cin >> amount;

    // Process
    if (amount >= MAGIC_NUMBER) {
        sub_total = (amount * COST_PER_CROISSANTS);
        total = sub_total * (1 + HST);
    }
    if (amount < MAGIC_NUMBER) {
        sub_total = (amount * COST_PER_CROISSANTS);
        total = sub_total;
    }

    // Output
    std::cout << "The final cost is: $" << std::fixed
              << std::setprecision(2) << std::setfill('0')
    << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
