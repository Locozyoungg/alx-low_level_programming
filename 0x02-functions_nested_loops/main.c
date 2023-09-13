#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}

/**
* print_alphabet - Prints the alphabet in lowercase followed by a new line.
*/
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}

/**
* print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
* followed by a new line each time.
*/
void print_alphabet_x10(void)
{
int i;

for (i = 0; i < 10; i++)
{
print_alphabet();
}
}

/**
* _islower - Checks if a character is lowercase.
* @c: The character to check.
*
* Return: 1 if c is lowercase, 0 otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

/**
* _isalpha - Checks if a character is alphabetic (a letter).
* @c: The character to check.
*
* Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

/**
* print_sign - Prints the sign of a number.
* @n: The number to check.
*
* Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

/**
* _abs - Computes the absolute value of an integer.
* @n: The integer to compute the absolute value of.
*
* Return: The absolute value of n.
*/
int _abs(int n)
{
if (n < 0)
return (-n);
else
return (n);
}

/**
* print_last_digit - Prints the last digit of a number.
* @n: The number to extract the last digit from.
*
* Return: The last digit of n.
*/
int print_last_digit(int n)
{
int last_digit;

last_digit = _abs(n) % 10;
_putchar('0' + last_digit);
return (last_digit);
}

/**
* jack_bauer - Prints every minute of the day of Jack Bauer.
*/
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}

/**
* times_table - Prints the 9 times table, starting with 0.
*/
void times_table(void)
{
int i, j, result;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;

if (j != 0)
{
_putchar(',');
_putchar(' ');
}

if (result >= 10)
{
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
else
{
_putchar(' ');
_putchar(result + '0');
}
}
_putchar('\n');
}
}

/**
* add - Adds two integers and returns the result.
* @a: The first integer.
* @b: The second integer.
*
* Return: The sum of a and b.
*/
int add(int a, int b)
{
return (a + b);
}
