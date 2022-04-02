// Calculates total fund-raising earnings
#include <iostream>


int main()
{
    // Declare variables
       int barsSold;
    double earningsPerBar, totalEarnings;

    // Prompt user for data
    std::cout << "How many chocolate bars were sold? ";
    std::cin >> barsSold;

    std::cout << "How much is earned per chocolate? ";
    std::cin >> earningsPerBar;

    //Calculate and display total
    totalEarnings = barsSold * earningsPerBar;
    std::cout << "\nTotal Amount Earned: $" << totalEarnings << endl;

    return 0;
}