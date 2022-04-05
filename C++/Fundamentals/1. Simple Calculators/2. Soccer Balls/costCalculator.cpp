// Calculates total cost of purchasing soccer balls
#include <iostream>

int main()
{
    // Declare variables
    double ballPrice, totalCost;
       int ballsPurchased;

    // Prompt user for balls purchased
    // and price for each one
    std::cout << "\n\nHow many balls were purchased? ";
    std::cin >> ballsPurchased;

    std::cout << "How much did each ball cost? $";
    std::cin >> ballPrice;

    // Calculate and display total cost
    totalCost = ballsPurchased * ballPrice;
    std::cout << "\nTotal cost: $" << totalCost << std::endl << std::endl;

    return 0;
}