#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int flank, base;

	if (size > 0)
	{
		for (flank = 1; flank <= size; flank++)
		{
			for (base = size - flank; base > 0; base--)
				_putchar(' ');

			for (base = 0; base < flank; base++)
				_putchar('#');

			if (flank == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
