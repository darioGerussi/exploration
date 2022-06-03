# Calculates the total cost of a restaurant bill
# including the meal cost, tip amount, and sales tax 

# Declare variables
tipRate = 0.18         # 18%
salesTaxRate = 0.07    #  7%

# Prompt user for cost of meal
mealCost = float(input('\nEnter total cost of meal: $'))

# Calculate and display total tip,
# total sales tax, and bill total
tipCost = mealCost * tipRate
salesTaxCost = mealCost * salesTaxRate
totalBill = mealCost + tipCost + salesTaxCost

print('\nWith 18% tip:            $', format(tipCost, ',.2f'), sep='')
print('With 7% sales tax:       $', format(salesTaxCost, ',.2f'), sep='')
print('Restaurant bill total:   $', format(totalBill, ',.2f'), '\n', sep='')
