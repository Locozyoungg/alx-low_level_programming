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
