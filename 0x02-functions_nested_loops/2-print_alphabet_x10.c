#include "main.h"

/**
* print_alphabet_x10 - Prints the lowercase alphabet ten times with newlines.
*
* Description: This function prints the lwrcase alphabet ten times, separating
* each sequence with a newline chrcter ('\n'). It follows prjct coding stndrds,
* limiting the use of _putchar to only two calls.
*/
void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i < 10; i++)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}

