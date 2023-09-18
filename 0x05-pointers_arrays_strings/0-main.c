#include "main.h"

int main(void)
{
int n = 42;
_putchar('0' + n / 10);
_putchar('0' + n % 10);
_putchar('\n');

reset_to_98(&n);

_putchar('0' + n / 10);
_putchar('0' + n % 10);
_putchar('\n');

return (0);
}
