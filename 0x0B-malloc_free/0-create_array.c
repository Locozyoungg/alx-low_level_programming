#include <stdio.h>
#include <stdlib.h>

/**
* create_array - Crt an arry of chrts initialize it with a specfc chrts.
* @size: The size of the array to create.
* @c: The character with which to initialize the array.
*
* Return: If memory allocation fails or size is 0, returns NULL.
*         Otherwise, returns a pointer to the created array.
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = (char *)malloc(sizeof(char) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}

