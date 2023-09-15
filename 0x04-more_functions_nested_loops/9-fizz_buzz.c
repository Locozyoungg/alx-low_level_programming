#include <stdio.h>
#include "main.h"

/**
* fizz_buzz - prints numbers from 1 to 100 with FizzBuzz logic
*/
void fizz_buzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}

if (i < 100)
{
printf(" ");
}
else
{
printf("\n");
}
}
}

printf("\n");

return (0);
}
