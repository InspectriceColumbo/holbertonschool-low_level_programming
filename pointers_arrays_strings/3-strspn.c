#include "main.h"
/**
 * _strspn - gets the length (in bytes) of a prefix substring
 * @s: the string we want to calculate the initial segment's length of
 * @accept: the string containing the bytes to be matched against in @s
 * Function calculates the length of the initial segment of @s that
 * consists entirely of bytes in @accept
 * Return: @a :the number of bytes in @s init segment that are part of @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	int i;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[a] == accept[i])
			{
				break;
			}
		}
		if (accept[a] == '\0')
		{
			return (a);
		}

	}
	return (a);
}
