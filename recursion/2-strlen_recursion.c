#include "main.h"
/**
 * _strlen_recursion - calculates the length of a string
 * @s: pointer to the string we want to know the length of
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
