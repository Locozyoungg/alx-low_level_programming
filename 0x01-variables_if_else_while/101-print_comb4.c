#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* The functn prints all possible diff combos of three dgts in ascending order,
* It ensures that the three digits are different.
* Numbers are printed as three-digit strings.
*
* Return: 0 (Success)
*/
int main(void)
{
int hundreds, tens, ones;

for (hundreds = 0; hundreds <= 7; hundreds++)
{
for (tens = hundreds + 1; tens <= 8; tens++)
{
for (ones = tens + 1; ones <= 9; ones++)
{
putchar('0' + hundreds);
putchar('0' + tens);
putchar('0' + ones);

if (hundreds != 7 || tens != 8 || ones != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
