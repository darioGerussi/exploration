# Calculates the net earnings
# of a stock transaction 

# Declare variables
commissionRate = 0.03     # Rate of 3%

# Purchase variables
sharesPurchased = 2000
sharePurchasePrice = 40.00
totalPurchase = sharesPurchased * sharePurchasePrice
purchaseCommission = totalPurchase * commissionRate

# Sale variables
sharesSold = 2000
shareSellPrice = 42.75
totalSale = sharesSold * shareSellPrice
saleCommission = totalSale * commissionRate

# Calculate net earnings
netEarnings = totalSale - totalPurchase - purchaseCommission - saleCommission

# Display stats
print('\nStock purchase price:         $', format(totalPurchase, ',.2f'), sep='')
print('Purchase commission price:    $', format(purchaseCommission, ',.2f'), sep='')
print('Stock sale price:             $', format(totalSale, ',.2f'), sep='')
print('Sale commission price:        $', format(saleCommission, ',.2f'), sep='')
print('Net earnings:                 $', format(netEarnings, ',.2f'), '\n', sep='')