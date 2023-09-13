#include "main.h"

/**
* Prints the lowercase alphabet ten times followed by a newline.
* Description.
* This function prints the lwrcs alphabet in sequence, repeating
* it ten times a newline character ('\n') is printed
* The function adheres to project-specific coding standards,
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

