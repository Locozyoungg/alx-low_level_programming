#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* This function prints the lowercase alphabet followed by a newline character.
* It uses the putchar function to print each character.
*
* Return: 0 (Success)
*/
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}
