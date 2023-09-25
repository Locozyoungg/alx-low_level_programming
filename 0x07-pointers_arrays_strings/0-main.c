#include "main.h"

/**
* _putchar - writes a character to stdout
* @c: The character to print
*
* Return: On success 1. On error, -1 is returned.
*/
int _putchar(char c)
{
return write(1, &c, 1);
}

/**
* simple_print_buffer - prints buffer in hexa
* @buffer: the address of memory to print
* @size: the size of the memory to print
*
* Return: Nothing.
*/
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
_putchar(' ');
}
if (!(i % 10) && i)
{
_putchar('\n');
}
_putchar('0');
_putchar('x');
_putchar(buffer[i]);
i++;
}
_putchar('\n');
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char buffer[98] = {0x00};

simple_print_buffer(buffer, 98);
_memset(buffer, 0x01, 95);
_putchar('\n');
simple_print_buffer(buffer, 98);    
return (0);
}
