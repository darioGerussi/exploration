# Calculate required measures of ingredients
# based on amount of cookies desired 

# Declare variables
CUPS_SUGAR = 1.5
CUPS_BUTTER = 1.0
CUPS_FLOUR = 2.75
BASE_COOKIES = 48

# Display original recipe
print("\n * * * Python's Original Cookie Recipe * * *")
print('- 1.5 cups of sugar')
print('- 1 cup of butter')
print('- 2.75 cups of flour')
print('Recipe makes 48 cookies')

# Prompt user how many cookies 
# they would like to make
desiredCookies = int(input('\nEnter desired number of cookies: '))

# Calculate adjusted recipe
recipeAdjustment = desiredCookies / BASE_COOKIES
cupsSugarNeeded = CUPS_SUGAR * recipeAdjustment
cupsButterNeeded = CUPS_BUTTER * recipeAdjustment
cupsFlourNeeded = CUPS_FLOUR * recipeAdjustment

# Display 
print('Cups of sugar required:', format(cupsSugarNeeded, '.2f'))
print('Cups of butter required:', format(cupsButterNeeded, '.2f'))
print('Cups of flour required:', format(cupsFlourNeeded, '.2f'), '\n')