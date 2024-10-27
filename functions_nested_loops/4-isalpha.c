#include "main.h"
/**
 * _isalpha - checks for alphabetic chars
 * @c - char to check
 *
 * Return: 1 if char is letter, lc or uc, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
