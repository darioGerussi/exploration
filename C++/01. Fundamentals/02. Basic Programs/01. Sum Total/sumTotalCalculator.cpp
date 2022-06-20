// Calculates total of two integers

#include <iostream>

int main()
{
    // Declare variables
    int integer1 = 50,
        integer2 = 100,
        total;

    // Calculate and display 
    // total of both variables
    total = integer1 + integer2;
    std::cout << "\nThe sum total of " << integer1;
    std::cout << " + " << integer2 << " is: ";
    std::cout << total << std::endl << std::endl;
}