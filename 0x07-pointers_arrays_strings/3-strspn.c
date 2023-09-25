#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: pointer to the string to be searched
* @accept: pointer to the string containg chartrs to match
*
* Return: bytes in the initial segment of `s` which
* consist only of bytes from `accept`.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;
int found;

for (i = 0; s[i] != '\0'; i++){
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (!found)
break;
count++;
}

return count;
}
