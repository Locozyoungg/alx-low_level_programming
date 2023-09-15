#include "main.h"

/**
* main - prints the numbers from 1 to 100, followed by a new line
* but for multiples of three prints Fizz instead of the number
* and for the multiples of five prints Buzz
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}
else if (i % 5 == 0 && i % 3 != 0)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
else if (i % 3 == 0 && i % 5 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
else
{
int num = i;

if (num >= 10)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}

if (i < 100)
{
_putchar(' ');
}
else
{
_putchar('\n');
}
}

return (0);
}

