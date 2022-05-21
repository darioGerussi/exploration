**Description**

Calculates the total restaurant bill  
for the meal, including the tip and  
the sales tax.

********************************************

**Box Model**

Input 1: Cost of Meal

Out: Total Bill

********************************************

**Design**

Set tipRate = 0.18  
Set salesTaxRate = 0.07  
Prompt user for mealCost

Set tipCost = mealCost * tipRate
Set salesTaxCost = mealCost * salesTaxRate
Set totalBill = mealCost + tipCost + salesTaxCost

Display tipCost
Display salesTaxCost
Display totalBill
