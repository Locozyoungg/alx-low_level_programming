#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
char s1[98] = "Hello ";
char s2[] = "World!\n";
char *ptr;

_puts(s1);
_puts(s2);
ptr = _strcat(s1, s2);
_puts(s1);
_puts(s2);
_puts(ptr);

return (0);
}
