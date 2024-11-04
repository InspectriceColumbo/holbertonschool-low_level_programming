#include "main.h"
/**
* _atoi - function that converts a string to an int
* @s: string 2B converted
* return: the int value that is the result of the converted string
*/
int _atoi(char *s)
{
	int signbf = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			signbf *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * signbf);
}
