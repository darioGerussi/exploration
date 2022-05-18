**Description**

Calculates the total amount of  
a purchase including the state  
and county sales taxes.

********************************************

**Box Model**

Input 1: Item Cost

Output: Purchase Total

********************************************

**Design**

Set salesTaxRate = 0.05  
Set countyTaxRate = 0.025  
Prompt user for itemCost

Set salesTaxTotal = itemCost * salesTaxRate  
Set countyTaxTotal = itemCost * countyTaxRate  
