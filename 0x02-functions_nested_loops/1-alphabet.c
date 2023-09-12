#include "main.h"
#include <unistd.h>

/**
* print_alphabet - Prints the lowercase alphabet followed by a new line.
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


#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
print_alphabet();
return (0);
}
