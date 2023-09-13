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
