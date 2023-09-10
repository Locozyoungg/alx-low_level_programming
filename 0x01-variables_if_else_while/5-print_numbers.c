#include <stdio.h>

int main(void)
{
int number = 0;

while (number <= 9)
{
putchar(number + '0');
number++;
}

putchar('\n');

return (0);
}
