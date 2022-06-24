/*
Program: MPG Calculator
Author: Dario Gerussi

Calculates the MPG rating of a vehicle
given its tank capacity and range per full tank.

Created: 06/24/2022

*/

#include <iostream>

int main()
{
    // Declare variables
    double gallonTankCapacity = 16,
           mileRangePerTank = 312,
           ratingMPG;

    // Calculate and display MPG rating
    ratingMPG = mileRangePerTank / gallonTankCapacity;
    std::cout << "\nThe fuel efficiency rating for this vehicle is: ";
    std::cout << ratingMPG << " MPG\n" << std::endl;

    return 0;
}