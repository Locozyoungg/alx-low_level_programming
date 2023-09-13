#include <stdio.h>

/**
* main - Prints the first 50 Fibonacci numbers.
*
* Return: Always 0.
*/
int main(void)
{
long long int fib1 = 1;  
long long int fib2 = 2; 
long long int next;    
int count;              

printf("%lld, %lld", fib1, fib2);  

for (count = 2; count < 50; count++)
{
next = fib1 + fib2;         
printf(", %lld", next);        
fib1 = fib2;                   
fib2 = next;                   
}

printf("\n"); 

return (0);  
}
