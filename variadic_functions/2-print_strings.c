#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: the string 2B printed between the strings. Type pointeur vers..
 * ..une cdc constante. si separator vaut ", " on print cdcs ac virgule entre.
 * @n: nombre d'arguments, i.e de strings 2B passed to the function & printed
 * @...: arguments variadiques de type const char* donc ptr vers string (cdc)
 * ..Ces args auront un nombre variable déterminé par la valeur de @n
 * If separator = NULL, don't print it. If one of the cdcs is NULL print (nil)
 * Print new line at end of function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nargs;
	unsigned int i;
	char *strg;

	va_start(nargs, n);

	for (i = 0; i < n; i++)
	{
		strg = va_arg(nargs, char *);
		printf("%s", strg);
		if (strg == NULL)
			printf("(nil)");
		else if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(nargs);
	printf("\n");
}
