# Calculates total acres based on square feet input

# Declare variables
sqftInOneAcre = 43560

# Prompt user for total square feet of parcel of land
totalSqft = float(input('\nEnter total square feet of parcel of land: '))

# Calculate and display total acres
totalAcres = totalSqft / sqftInOneAcre
print('Total acres: ', format(totalAcres, ',.1f'), '\n')
