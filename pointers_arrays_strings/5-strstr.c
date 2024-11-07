#include "main.h"
/**
 * _strstr - locates a substring. Btw termination null bytes are not compared
 * @haystack :the string in which we want to locate an occurence of ss @needle
 * @needle : the substring we want to find an occurence of in @haystack
 * Return: pointer to beginning of located ss (i.e substring)
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *hay = haystack;
		char *nee = needle;

		while (*hay && *nee && (*hay == *nee))
		{
			hay++;
			nee++;
		}
		if (*nee == '\0')

		return (haystack);

		haystack++;
	}
	return ('\0');
}
