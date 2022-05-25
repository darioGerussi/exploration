**Description**

Calculates the total cost of a 5-item  
purchase, including the sales tax.

***********************************

**Box Model**

Input 1: Cost of Item 1  
Input 2: Cost of Item 2  
Input 3: Cost of Item 3  
Input 4: Cost of Item 4  
Input 5: Cost of Item 5  

Output: Total Cost

***********************************

**Design**

Set salesTax = 0.07  
Prompt user for item1Cost (x5 for all 5 items)

Set subtotal = item1Cost + item2Cost + item3Cost + item4Cost + item5Cost  
Set totalCost = subtotal + (subtotal * salesTax)

Display totalCost
