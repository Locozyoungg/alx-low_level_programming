#include "main.h"

/**
* find_sqrt - Helper function to find the square root using recursion.
* @n: The number for which to find the square root.
* @guess: The current guess for the square root.
*
* Return: The natural square root of n, or -1 if it doesn't exist.
*/
int find_sqrt(int n, int guess)
{
int square = guess * guess;

if (square == n)
return (guess);
else if (square > n)
return (-1);
else
return (find_sqrt(n, guess + 1));
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number for which to find the square root.
*
* Return: The natural square root of n, or -1 if it doesn't exist.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (find_sqrt(n, 0));
}
