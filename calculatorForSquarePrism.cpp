// Copyright (c) 2022 Joseph Kwon All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Sep. 30, 2022
// This program asks the user for the base edge (a)
// and height (h) and then displays the circumference and area

// a non-standard header file of GNU C++ library
#include <bits/stdc++.h>

// for computing common mathematical functions <math>
#include <cmath>
#include <iostream>

// standard library
using namespace std;

int main() {
    // declare variables for the three user inputs
    float baseEdge;
    float height;
    string units;

    // get input from user - Units, Base Edge, Height
    // \033 changes color of console output color
    std::cout
        << "\033[31mCalculator for Surface Area and Volume of a square prism\n";
    std::cout << std::endl;
    std::cout << "Enter the units you will be using: ";
    std::cin >> units;
    std::cout << std::endl;
    std::cout
        << "\033[33mEnter the base edge (a) of the square prism in "
        << (units) << ": ";
    std::cin >> baseEdge;
    std::cout
        << "Enter the height (h) of the square prism in "
        << (units) << ": ";
    std::cin >> height;

    // calculate the surface area and volume using the formulas
    float volume = pow(baseEdge, 2) * height;
    float surfaceArea = 2 * pow(baseEdge, 2) + 4 * baseEdge * height;

    // display the volume and surface area (results) to the user
    // setprecision(2) is used to round the final result to 2 decimal places
    std::cout << std::endl;
    std::cout << "\033[32mThe volume of a square prism is = "
              << fixed << setprecision(2) << volume << (units) << "³\n";

    std::cout << "The surface area of the square prism is = "
              << fixed << setprecision(2) << surfaceArea << (units) << "²";
    return 0;
}
