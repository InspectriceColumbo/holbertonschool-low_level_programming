#include "main.h"
/**
 *_isupper - checks for uc chars
 *c - char 2b  checked
 * @c parameter: checks c chars
 * Return: 1 if char is uc, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
