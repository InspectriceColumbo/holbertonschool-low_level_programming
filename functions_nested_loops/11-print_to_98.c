#include <stdio.h>
/**
 * print_to_98 - function that prints numbs from n to 98
 *
 * @n: number to be checked
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
