# Calculates total profit based on estimated sales

# Declare variables
profitMargin = 0.23   # Set to average profit earned

# Prompt user for estimated total sales
totalSalesEstimate = float(input('\nEnter estimated total sales: $'))

# Calculate and display projected profit earned
totalProfit = totalSalesEstimate * profitMargin
print('Total projected profit: $', format(totalProfit, ',.2f'), '\n', sep='')
