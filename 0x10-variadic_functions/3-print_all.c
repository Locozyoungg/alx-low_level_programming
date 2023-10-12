#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - Print anything based on the format specifier
* @format: A list of types of argmnts passed to the fction
*/
void print_all(const char * const format, ...)
{
va_list args;
char *separator = "";
int i = 0;

va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
}
break;
}

separator = ", ";
i++;
}

va_end(args);

printf("\n");
}
