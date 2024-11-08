#include "main.h"
/**
 * factorial -searches for the factorial of a number
 * @n: the number of which we want to find the factorial
 * A factorial is the product of all the natural numbers less than or equal to @n
 * The factorial of a positive number n is given by: (n!) = 1 * 2 * 3 * 4....n.
 * If input @n= 0, i.e 0!=1. Factorial of a negative number does not exist. 
 * Return: the @n factorial, and if n<0 return -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
