# Calculates the ratios of male
# and female students

# Prompt user for number of
# male and female students
maleStudents = int(input('\nEnter number of male students: '))
femaleStudents = int(input('Enter number of female students: '))

# Calculate percentages of each gender
totalStudents = maleStudents + femaleStudents
malePercentage = (float(maleStudents) / totalStudents) * 100
femalePercentage = (float(femaleStudents) / totalStudents) * 100

# Display percentages of each gender
print('\nPercentage of males in class: ', format(malePercentage, '.1f'), '%', sep='')
print('Percentage of females in class: ', format(femalePercentage, '.1f'), '%\n', sep='')