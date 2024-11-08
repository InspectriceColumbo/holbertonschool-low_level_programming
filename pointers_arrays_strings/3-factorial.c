#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number of which we want the factorial
 * Return: -1 if n < 0; or return the factorial of n if n > 0
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
