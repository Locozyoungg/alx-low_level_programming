#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* The functn prints all possible combos of two two-dgt numb in ascending order,
* It ensures that the two numbers are distinct.
* Numbers are printed with two digits, and the combo is separated by a comma.
*
* Return: 0 (Success)
*/
int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 98; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
putchar('0' + (num1 / 10));
putchar('0' + (num1 % 10));
putchar(' ');
putchar('0' + (num2 / 10));
putchar('0' + (num2 % 10));

if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
