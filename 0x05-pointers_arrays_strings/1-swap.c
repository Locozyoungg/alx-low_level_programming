#include "main.h"

/**
* swap_int - swaps the figures of two integers
* @a: pointer to first figure
* @b: pointer to second figure
*/
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
