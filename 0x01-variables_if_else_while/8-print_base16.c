#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* This function prints all the numbers of base 16 (hexadecimal) in lowercase,
* It uses the putchar function to print each digit.
*
* Return: 0 (Success)
*/
int main(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}

for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}

putchar('\n');

return (0);
}
