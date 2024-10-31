#include "main.h"
/**
 * print_line - function that prints a straight line
 * @n: number of time to print character '_'
 */

void print_line(int n)
{
	int l;

	if (n > 0)
{
	for (l = 0; l < n ; l++)
	_putchar('_');
}
	_putchar('\n');
}
