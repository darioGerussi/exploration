# Calculates total cost of 5-item cart

# Declare variables
salesTax = 0.07     # 7% Sales Tax

# Prompt user for cost of each of the 5 items
item1Cost = float(input('\nEnter cost of Item 1: $'))
item2Cost = float(input('Enter cost of Item 2: $'))
item3Cost = float(input('Enter cost of Item 3: $'))
item4Cost = float(input('Enter cost of Item 4: $'))
item5Cost = float(input('Enter cost of Item 5: $'))

# Calculate subtotal
subtotal = item1Cost + item2Cost + item3Cost + item4Cost + item5Cost

# Calculate and display total
totalCost = subtotal + (subtotal * salesTax)
print('Total cost of purchase: $', format(totalCost, ',.2f'), '\n', sep='')