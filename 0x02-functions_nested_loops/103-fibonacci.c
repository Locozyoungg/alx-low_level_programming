#include <stdio.h>

/**
* main - Entry point
*
* Description: Calculates the sum of even Fibonacci numbers
*              that do not exceed 4,000,000.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int fib1 = 1;
int fib2 = 2;
int next;
int sum = 0;

while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
{
sum += fib2;
}

next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
}

printf("%d\n", sum);

return (0);
}
