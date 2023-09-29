#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* is_positive_number - Checks if a string is a positive number
* @s: The string to check
* Return: 1 if positive number, 0 otherwise
*/
int is_positive_number(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array containing the command-line arguments
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int sum = 0;

for (int i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
int num = atoi(argv[i]);
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);

return (0);
}

