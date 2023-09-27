#include "main.h"

/**
* _putchar - Custom putchar function (provided by the task)
* @c: The character to be printed
*/
int _putchar(char c);

/**
* _puts_recursion - Prints a string followed by a new line.
* @s: The string to be printed.
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(s + 1);
}
