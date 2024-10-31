#include "main.h"
/**
 *more_numbers(void) - function prints numbers from 0 to 14 ten times
 *
 * return: (void)
 */
void more_numbers(void)
{
	int n = 0;
	int number;

	while (n < 10)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9) 
			{	
				_putchar((number / 10)+ '0');
			}
			_putchar((number % 10)+ '0');
		}
		_putchar('\n');
		n++;
	}
}
