#include "main.h"

/**
* set_string - sets the value of a pointer to a char
* @s: pointer to a pointer to a char (double pointer)
* @to: pointer to a char (string) to set the pointer to
*
* Return: void
*/
void set_string(char **s, char *to)
{
*s = to;
}
