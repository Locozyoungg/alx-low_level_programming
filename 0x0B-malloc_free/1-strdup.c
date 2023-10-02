#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - Duplicate a string in memory.
* @str: The string to duplicate.
*
* Return: A pointer to the newly allocated string, or NULL on failure.
*/
char *_strdup(char *str)
{
char *dup_str;
int length = 0, i;

if (str == NULL)
return (NULL);

while (str[length])
length++;

dup_str = (char *)malloc(sizeof(char) * (length + 1));

if (dup_str == NULL)
return (NULL);

for (i = 0; i <= length; i++)
dup_str[i] = str[i];

return (dup_str);
}
