#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* This function prints the lowercase alphabet, excluding the letters 'e' and 'q',
* followed by a newline character. It uses the putchar function to print.
*
* Return: 0 (Success)
*/
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}

putchar('\n');

return (0);
}
