# Calculates MPG rating of car based on
# miles driven and gallons of gas consumed

# Prompt user for miles driven and 
# gallons of gas consumed 
milesDriven = float(input('\nEnter miles driven: '))
gasolineGallonsConsumed = float(input('Enter gallons of gas consumed: '))

# Calculate and display MPG rating
mpgRating = milesDriven / gasolineGallonsConsumed
print('\nMPG Rating: ', format(mpgRating, '.1f'), '\n', sep='')
