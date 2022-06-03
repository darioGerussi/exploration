**Description**

Stores a measure of 3 ingredients  
needed to make 48 cookies. Asks  
user how many cookies are desired  
and then displays the required  
measures to make that many cookies.

***********************************

**Box Model**

Input 1: Cookies Desired

Output: Adjusted Recipe

***********************************

**Design**

Set CUPS_SUGAR = 1.5  
Set CUPS_BUTTER = 1.0  
Set CUPS_FLOUR = 2.75  
Set BASE_COOKIES = 48

Prompt user for desiredCookies

Set recipeAdjustment = desiredCookies / BASE_COOKIES  
Set cupsSugarNeeded = CUPS_SUGAR * recipeAdjustment  
Set cupsButterNeeded = CUPS_BUTTER * recipeAdjustment  
Set cupsFlourNeeded = CUPS_FLOUR * recipeAdjustment

Display cupsSugarNeeded  
Display cupsButterNeeded  
Display cupsFlourNeeded
