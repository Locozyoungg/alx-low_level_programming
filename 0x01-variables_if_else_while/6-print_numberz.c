#include <stdio.h>
#include <unistd.h>

int main(void)
{
if (write(1, "0123456789\n", 11) == -1)
return (1);
return (0);
}

