// Calculates total fund-raising earnings
#include <iostream>


int main()
{
    // Declare variables
       int barsSold;
    double earningsPerBar, totalEarnings;

    // Prompt user for data
    std::cout << "\n\nHow many chocolate bars were sold? ";
    std::cin >> barsSold;

    std::cout << "How much is earned per chocolate? ";
    std::cin >> earningsPerBar;

    //Calculate and display total
    totalEarnings = barsSold * earningsPerBar;
    std::cout << "\nTotal amount earned: $" << totalEarnings << std::endl;
    std::cout << std::endl;

    return 0;
}