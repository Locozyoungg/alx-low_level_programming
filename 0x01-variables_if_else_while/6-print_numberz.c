#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point of the program
*
* Description:
* The program prints single-digit numbers in base 10, starting from 0 to 9,
* followed by a new line. It adheres to the specified requirements:
* - It uses the `write` functn to print the numbers
* - It does not use any variables of type `char`.
* - It includes a newline character ('\n') at the end to create a new line.
*
* Return: 0 (Success)
*/
int main(void)
{
if (write(1, "0123456789\n", 11) == -1)
return (1);
return (0);
}

