// Calculates how much Texas sales division
// will make in sales

#include <iostream>

int main()
{
    // Declare variables
    double texasDivisionSalesRatio = 0.57,
           totalCompanySales = 8.6,           // Million dollars
            texasDivisionTotalSales;

    // Calculate and display sales
    // for Texas sales division
    texasDivisionTotalSales = texasDivisionSalesRatio * totalCompanySales;
    std::cout << "\nThe total sales for the Texas division this year is: $";
    std::cout << texasDivisionTotalSales << "M" << std::endl << std::endl;

    return 0;
}
