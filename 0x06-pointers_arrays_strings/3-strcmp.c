#include "main.h"

/**
* _strcmp - Compares two strings
* @s1: The first string
* @s2: The second string
*
* Return: Negative if s1 is less than s2, positive if s1 is greater than s2,
*         and 0 if they are equal.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}

return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
