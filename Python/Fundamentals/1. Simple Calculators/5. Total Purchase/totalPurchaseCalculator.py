# Calculate total purchase cost of item
# including both the state and county taxes

# Declare variables
stateTaxRate = 0.05
countyTaxRate = 0.025

# Prompt user for cost of item to be purchased
itemCost = float(input('\nEnter cost of item: $'))

# Calculate the state tax amount,
# the county tax amount, the total
# sales tax, and the total cost
stateTaxCost = itemCost * stateTaxRate
countyTaxCost = itemCost * countyTaxRate
salesTaxCost = stateTaxCost + countyTaxCost
totalCost = itemCost + salesTaxCost

# Display the item cost, each of
# the taxes, the combined taxes,
# and the total purchase cost
print('\nCost of item:   $', format(itemCost, ',.2f'),
      '\nState Tax:      $', format(stateTaxCost, ',.2f'),
      '\nCounty Tax:     $', format(countyTaxCost, ',.2f'),
      '\nTotal Tax:      $', format(salesTaxCost, ',.2f'),
      '\nTotal Cost:     $', format(totalCost, ',.2f'), '\n', sep='')
      