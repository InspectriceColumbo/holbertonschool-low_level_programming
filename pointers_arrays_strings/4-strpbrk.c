#include "main.h"
/**
 * _strpbrk - locates first occurence in @s of any byte that exists in @accept
 * @s : the null-terminated string we want to locate the ref string's bytes in
 * @accept : the string that contains the bytes we want to locate in @s
 * Function searches the string @s (including null terminator '\0') for first
 * occurence of a byte that matches any byte that is present in @accept
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
