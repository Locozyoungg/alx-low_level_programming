#include <stdio.h>

/**
* main - Entry point
*
* Description: Calculates and prints the first 98 Fibonacci numbers.
*              Numbers are separated by a comma and space.
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int fib1 = 1;
unsigned long int fib2 = 2;
unsigned long int next;
int i;

printf("%lu", fib1);

for (i = 1; i < 98; i++)
{
printf(", %lu", fib2);

next = fib1 + fib2;


fib1 = fib2;
fib2 = next;
}

printf("\n");

return (0);
}
