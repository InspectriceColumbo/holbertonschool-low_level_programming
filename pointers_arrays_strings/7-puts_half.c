#include "main.h"
/**
* puts_half - function that prints half of a string
* @str: The string 2B printed
*/
void puts_half(char *str)
{
	int part = 0, string = 0, n;

	while (str[part++])
		string++;

	if ((string % 2) == 0)
		n = string / 2;

	else
		n = (string + 1) / 2;

	for (part = n; part < string; part++)
		_putchar(str[part]);

	_putchar('\n');
}
