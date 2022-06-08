// Calculates total cost of swimming pool construction
#include<iostream>

int main()
{
    // Declare variables
    double cementAndTileCost, pumpAndPipingCost, laborCost, totalCost;

    // Prompt user for all costs
    // associated with pool construction
    std::cout << "\n\nWhat are the cement and tile costs? ";
    std::cin >> cementAndTileCost;

    std::cout << "What are the pump and piping costs? ";
    std::cin >> pumpAndPipingCost;

    std::cout << "What are the labor costs? ";
    std::cin >> laborCost;

    // Calculate and display total costs
    totalCost = cementAndTileCost + pumpAndPipingCost + laborCost;
    std::cout << "\nTotal cost: $" << totalCost << std::endl << std::endl;
    
}