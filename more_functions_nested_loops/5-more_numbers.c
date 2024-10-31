#include "main.h"
/**
 * more_numbers(void) - function prints numbers from 0 to 14 ten times
 *
 * return: (void)
 */
void more_numbers(void)
{
	int n = 0;
	int number;

	while (n < 10)
{
	number = 0;
	while (number <= 14)
{
	_putchar(number);
	number++;
}
	_putchar('\n');
	n++;
}
}
