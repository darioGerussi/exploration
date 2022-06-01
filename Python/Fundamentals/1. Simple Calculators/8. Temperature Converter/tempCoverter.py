# Converts a given temperature from Celsius to Fahrenheit

# Prompt user for Celsius temperature
degreesCelsius = float(input('\nEnter the temperature in Celsius: '))

# Calculate and display the converted
# temperature in Fahrenheit
degreesFahrenheit = ((9.0 / 5.0) * degreesCelsius) + 32

print('Fahrenheit equivalent: ', format(degreesFahrenheit, ',.1f'), '\n', sep='')