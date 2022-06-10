**Description**

Calculate the net earnings of a  
stock transaction.

***********************************

**Box Model**

(All input is provided)  
Input 1: 3% Commission  
Input 2: 2,000 Shares Purchased  
Input 3: $40.00 Share Price    
Two Weeks Later..  
Input 4: 2,000 Shares Sold  
Input 5: $42.75 Share Price


Output: Net Earnings

***********************************

**Design**

Set commissionRate = 0.03  
Set sharesPurchased = 2000  
Set sharePurchasePrice = 40.00  
Set totalPurchase = sharesPurchased * sharePurchasePrice  
Set purchaseCommission = total Purchase * commissionRate

Set sharesSold = 2000  
Set shareSellPrice = 42.75  
Set totalSale = sharesSold * sharesSellPrice  
Set saleCommission = totalSale * commissionRate  

Set netEarnings = totalSale - totalPurchase - purchaseCommission - saleCommission

Display totalPurchase  
Display purchaseCommission  
Display totalSale  
Display saleCommission  
Display netEarnings