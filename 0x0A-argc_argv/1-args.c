#include <stdio.h>

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array containing the command-line arguments
*
* Description: This program prints the number of arguments passed into it.
*              It prints a number, followed by a new line.
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);

return (0);
}
