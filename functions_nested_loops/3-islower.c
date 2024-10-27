#include "main.h"
/**
 * _islower - function that checks if char r lc
 * c - char to check
 * @c: checks lc characters
 * Return: 1 = lc char or 0 = uc char
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
