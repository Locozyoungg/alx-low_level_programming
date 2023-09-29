#include <stdio.h>

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array containing the command-line arguments
*
* Description: This program prints all the arguments it receives,
*              one argument per line, ending with a new line.
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
