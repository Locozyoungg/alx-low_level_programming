#include <stdio.h>
#include <stdlib.h>

/**
* print_opcodes - Print the opcodes of a function
* @bytes: The number of opcodes to print
*/
void print_opcodes(int bytes);

/**
* main - Program entry point
* @argc: The number of command-line arguments
* @argv: An array of command-line argument strings
*
* Return: 0 on success, 1 for incorrect arguments, and 2 for negative bytes
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
return (2);
}

print_opcodes(bytes);

return (0);
}

/**
* print_opcodes - Print the opcodes of a function
* @bytes: The number of opcodes to print
*/
void print_opcodes(int bytes)
{
int i;
unsigned char *main_addr = (unsigned char *)main;

for (i = 0; i < bytes; i++)
{
printf("%02x", main_addr[i]);
if (i < bytes - 1)
printf(" ");
}
printf("\n");
}

