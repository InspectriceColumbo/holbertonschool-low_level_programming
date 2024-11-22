#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: type const unsigned int
 * @...: variable arguments of type unsigned int
 * Return: Sum of all the parameters. If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nargs;
	int sum = 0;
	unsigned int i;

	va_start(nargs, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nargs, int);
	}

	va_end(nargs);
	return (sum);
}
