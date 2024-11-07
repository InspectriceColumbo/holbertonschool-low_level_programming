#include "main.h"
/**
 * _strchr - locates a character in a string -nb here "character" means "byte"
 * @s : the null-terminated string in which we want to locate the character @c
 * @c : the character we want to find the first occurence of in the string @s
 * Function searches the string @s for c (including the null terminator, '\0')
 * Search stops when either c is found, or the null-terminator is arrived at
 *Return: pointer to the location of @c in @s, or NULL if char c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
