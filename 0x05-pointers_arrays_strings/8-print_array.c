#include <stdio.h>

/**
* print_array - Prints n elements of an integer array
* @a: Pointer to the integer array
* @n: Number of elements to print
*/
void print_array(int *a, int n)
{
if (n <= 0)
{
printf("\n");
return;
}

 printf("%d", a[0]);

for (int i = 1; i < n; i++)
{
printf(", %d", a[i]);
}

printf("\n");
}

int main(void)
{
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);

print_array(arr, n);

return (0);
}
