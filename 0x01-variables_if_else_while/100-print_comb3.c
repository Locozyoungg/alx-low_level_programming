#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* The functn prints all possible different combos of two digts in ascending order,
* It ensures that the two digits are different.
* Numbers are printed as two-digit strings.
*
* Return: 0 (Success)
*/
int main(void)
{
int tens_digit, ones_digit;

for (tens_digit = 0; tens_digit <= 8; tens_digit++)
{
for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
{
putchar('0' + tens_digit);
putchar('0' + ones_digit);

if (tens_digit != 8 || ones_digit != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
