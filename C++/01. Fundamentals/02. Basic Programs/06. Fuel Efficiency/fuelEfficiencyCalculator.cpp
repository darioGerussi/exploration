/*
Program: City vs. Highway Range
Author: Dario Gerussi

Calculates mile range of full tank
driving in city compared to on highway

Created: 06/27/2022

*/

#include <iostream>

int main()
{
    // Declare variables
    double gallonsGasTankCapacity = 20.0,
           cityMPG = 23.5,
           highwayMPG = 28.9,
           cityMilesPerTank,
           highwayMilesPerTank;

    // Calculate mile range for
    // city vs. highway driving
    cityMilesPerTank = gallonsGasTankCapacity * cityMPG;
    highwayMilesPerTank = gallonsGasTankCapacity * highwayMPG;

    // Display mile range for
    // city vs. highway driving
    std::cout << "\nRange for Full Tank in the City: ";
    std::cout << cityMilesPerTank << " miles";
    std::cout << "\nRange for Full Tank on the Highway: ";
    std::cout << highwayMilesPerTank << " miles\n" << std::endl;

    return 0;
}