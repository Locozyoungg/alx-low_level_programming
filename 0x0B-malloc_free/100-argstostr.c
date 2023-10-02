#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - Concatenate all arguments of a program.
* @ac: The argument count.
* @av: Array of argument strings.
*
* Return: A pointer to the concatenated string, or NULL on failure.
*/
char *argstostr(int ac, char **av)
{
char *concat_str;
int i, j, k, len = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++;
}

concat_str = (char *)malloc(sizeof(char) * (len + 1));

if (concat_str == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
concat_str[k] = av[i][j];
k++;
}
concat_str[k] = '\n';
k++;
}

concat_str[k] = '\0';

return (concat_str);
}
