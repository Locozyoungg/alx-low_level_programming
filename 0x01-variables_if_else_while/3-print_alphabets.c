#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* This function prints the lowercase alphabet, followed by the uppercase alphabet,
* both followed by a newline character. It uses the putchar function to print each character.
*
* Return: 0 (Success)
*/

int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n');

return (0);
}

