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
int count;

printf("%lu, %lu", fib1, fib2);

for (count = 2; count < 98; count++)
{
next = fib1 + fib2;
printf(", %lu", next);
fib1 = fib2;
fib2 = next;
}

printf("\n");

return (0);
}
