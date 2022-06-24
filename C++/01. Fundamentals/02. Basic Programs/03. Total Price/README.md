**Description**

Computes the total price of a  
purchase plus the state and  
county sales taxes.

***********************

**Box Model**

(All inputs are given)  
Input 1: Item Price  
Input 2: State Sales Tax  
Input 3: County Sales Tax

Output: Total Price

***********************

**Design**

Set itemPrice = 95.00  
Set stateSalesTaxRatio = 0.065  
Set countySalesTaxRatio = 0.02

Set stateSalesTaxAmount = itemPrice * stateSalesTaxRatio  
Set countySalesTaxAmount = itemPrice * countySalesTaxRatio  
Set totalTaxAmount = stateSalesTaxAmount + countySalesTaxAmount  
Set totalPrice = itemPrice + totalTaxAmount

Display itemPrice  
Display totalTaxAmount  
Display totalPrice

