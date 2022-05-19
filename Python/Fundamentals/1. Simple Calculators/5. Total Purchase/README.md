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

Set salesTaxCost = itemCost * salesTaxRate  
Set countyTaxCost = itemCost * countyTaxRate  
Set totalTaxCost = salesTaxCost + countyTaxCost  
Set totalCost = itemCost + totalTaxCost

Display itemCost  
Display salesTaxCost  
Display countyTaxCost  
Display totalTaxCost  
Display totalCost