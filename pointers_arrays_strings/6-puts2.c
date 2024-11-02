#include "main.h"
/**
* puts2 - function that prints every other char of a string
* @str: The string that contains the chars 2B printed
* return: (void)
*/
void puts2(char *str)
{
	int string = 0, base = 0;

	while (str[string++])
		base++;

	for (string = 0; string < base; string += 2)
		_putchar(str[string]);

	_putchar('\n');
}
