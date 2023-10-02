#include <stdio.h>
#include <stdlib.h>

/**
* count_words - Count the number of words in a string.
* @str: The input string.
*
* Return: The number of words in the string.
*/
int count_words(char *str)
{
int count = 0, in_word = 0, i = 0;

while (str[i])
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
{
if (in_word)
{
in_word = 0;
count++;
}
}
else
{
in_word = 1;
}
i++;
}

if (in_word)
count++;

return (count);
}

/**
* strtow - Split a string into words.
* @str: The input string.
*
* Return: A pointer to an array of strings (words), or NULL on failure.
*/
char **strtow(char *str)
{
char **words;
int word_count, i, j, k, len;

if (str == NULL || *str == '\0')
return (NULL);

word_count = count_words(str);

words = (char **)malloc(sizeof(char *) * (word_count + 1));

if (words == NULL)
return (NULL);

i = 0;
k = 0;

while (str[i])
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
{
i++;
continue;
}

len = 0;
j = i;
while (str[j] && str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
{
len++;
j++;
}

words[k] = (char *)malloc(sizeof(char) * (len + 1));

if (words[k] == NULL)
{
while (k > 0)
{
free(words[k - 1]);
k--;
}
free(words);
return (NULL);
}

for (j = 0; j < len; j++)
words[k][j] = str[i + j];
words[k][j] = '\0';

k++;
i += len;
}

words[k] = NULL;

return (words);
}
