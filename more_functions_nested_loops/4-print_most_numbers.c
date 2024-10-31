#include "main.h"
/**
 * print_most_numbers - function prints most numbers but not all
 *
 * return: (void)
 */
void print_most_numbers(void)
{
	int (n) = '0';
	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')

			_putchar(n);
	}
	_putchar('\n');
}
