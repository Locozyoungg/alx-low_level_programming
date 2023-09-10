#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* This function prints all single-digit numbers in base 10, start frm 0 to 9,
* followed by a newline character.
*
* Return: 0 (Success)
*/
int main(void)
{
int number = 0;

while (number <= 9)
{

putchar(number + '0');
number++;
}

putchar('\n');

return (0);
}
