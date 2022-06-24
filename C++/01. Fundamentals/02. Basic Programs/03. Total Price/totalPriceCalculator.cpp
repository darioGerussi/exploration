// Calculates total price of purchase
// including state and county sales tax

#include <iostream>

int main()
{
    // Declare variables
    double itemPrice = 95.00,           // Dollars
           stateSalesTaxRatio = 0.065,  // 6.5%
           countySalesTaxRatio = 0.02,  // 2%
           stateSalesTaxAmount,
           countySalesTaxAmount,
           totalSalesTaxAmount,
           totalPrice;

    // Calculate state, county, and total
    // sales taxes
    stateSalesTaxAmount = itemPrice * stateSalesTaxRatio;
    countySalesTaxAmount = itemPrice * countySalesTaxRatio;
    totalSalesTaxAmount = stateSalesTaxAmount + countySalesTaxAmount;

    // Calculate and display total price
    totalPrice = itemPrice + totalSalesTaxAmount;
    std::cout << "\nItem Price:    $" << itemPrice;
    std::cout << "\nSales Tax:     $" << totalSalesTaxAmount;
    std::cout << "\nTotal Price:   $" << totalPrice << std::endl << std::endl;
}