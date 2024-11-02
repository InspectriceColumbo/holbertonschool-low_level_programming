#include "main.h"
/**
 *print_square - function that prints a square
 *@size: size of the square (char '#' used to print the square)
 */
void print_square(int size)
{
	int horizontal;
	int vertical;

	if (size <= 0)
	_putchar('\n');

	for (horizontal = 0; horizontal < size; horizontal++)
{
	for (vertical = 0; vertical < size; vertical++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
