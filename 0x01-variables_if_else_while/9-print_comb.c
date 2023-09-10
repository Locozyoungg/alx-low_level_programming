#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* The functn prints all possible combinations of single-digit nmbrs in ascending order,
* It uses the putchar function to print each digit and separator.
*
* Return: 0 (Success)
*/
int main(void)
{
int number = 0;

while (number < 10)
{
putchar(number + '0');
if (number < 9)
{
putchar(',');
putchar(' ');
}
number++;
}

putchar('\n');

return (0);
}
