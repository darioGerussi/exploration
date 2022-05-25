**Description**

Calculates the total amount of  
a purchase including the state  
and county sales taxes.

***********************************

**Box Model**

Input 1: Item Cost

Output: Purchase Total

***********************************

**Design**

Set stateTaxRate = 0.05  
Set countyTaxRate = 0.025  
Prompt user for itemCost

Set stateTaxCost = itemCost * stateTaxRate  
Set countyTaxCost = itemCost * countyTaxRate  
Set salesTaxCost = stateTaxCost + countyTaxCost  
Set totalCost = itemCost + salesTaxCost

Display itemCost  
Display stateTaxCost  
Display countyTaxCost  
Display salesTaxCost  
Display totalCost