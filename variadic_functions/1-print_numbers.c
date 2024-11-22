#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string 2B printed between numbers. Type pointeur vers..
 * ..une cdc constante. si separator vaut ", " on print cdcs ac virgule entre.
 * @n: nmbre d'args i.e nmbre d'entiers qui doivent ê passés à la fonction
 * @...: args variadiques de type unsigned int, la fonction en acceptera..
 * ..un nombre variable déterminé par la valeur de @n
 * If separator = NULL, don't print it
 * Print new line at end of function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nargs;
	unsigned int i;

	va_start(nargs, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nargs, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(nargs);
	printf("\n");
}
