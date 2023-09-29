#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array containing the command-line arguments
*
* Description: This program multiplies two numbers and prints the result.
*
* Return: 0 on success, 1 on error (if not given two arguments)
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;

printf("%d\n", result);

return (0);
}
