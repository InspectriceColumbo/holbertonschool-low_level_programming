#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: number whose sign is tb printed
 * Return: 1, print + if n>0,
 * 0, print 0 if n=0,
 * -1, print - if n<0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
