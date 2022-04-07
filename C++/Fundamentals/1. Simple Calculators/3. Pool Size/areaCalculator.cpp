// Calculates area of salt-water pool
#include <iostream>

int main()
{
    // Declare variables 
    double poolLength, poolWidth, poolArea;

    // Prompt user for pool length and width
    std::cout << "\n\nWhat is the length of the pool in feet? ";
    std::cin >> poolLength;

    std::cout << "What is the width of the pool in feet? ";
    std::cin >> poolWidth;

    //Calculate and display pool area
    poolArea = poolLength * poolWidth;
    std::cout << "\nPool area: " << poolArea << " sq.ft" << std::endl << std::endl;

    return 0;
}