/*
Program: Dining Out Meal Calculator
Author: Dario Gerussi

Calculates the total cost of a bill
including the tax and tip.

Created: 06/24/2022

*/

#include <iostream>

int main()
{
    // Declare variables
    double mealCost = 44.50,       // Dollars
           taxRate = 0.0675,       // 6.75%
           tipRate = 0.15,         // 15%
           taxAmount,
           tipAmount,
           totalBill;

    // Calculate total amounts for
    // tax, tip, and entire bill
    taxAmount = mealCost * taxRate;
    tipAmount = mealCost * tipRate;
    totalBill = mealCost + taxAmount + tipAmount;

    // Display cost of meal, tax, 
    // tip, and entire bill
    std::cout << "\nMeal cost:    $" << mealCost;
    std::cout << "\nTax amount:   $" << taxAmount;
    std::cout << "\nTip amount:   $" << tipAmount;
    std::cout << "\nTotal bill:   $" << totalBill << std::endl << std::endl;

    return 0;
}