#include "main.h"
/**
* _puts - function that rints a string to standout
* @str: the string 2B printed
*/
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
