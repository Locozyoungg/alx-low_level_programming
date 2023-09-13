#include <stdio.h>

/**
* main - Prints the first 50 Fibonacci numbers.
*
* Return: Always 0.
*/
int main(void)
{
long int fib1 = 1;
long int fib2 = 2;
long int next;
int i;

printf("%ld, %ld", fib1, fib2);

for (i = 2; i < 50; i++)
{
next = fib1 + fib2;
printf(", %ld", next);

fib1 = fib2;
fib2 = next;
}

printf("\n");

return (0);
}
