#include "main.h"

/**
 * _strncpy - copies up to @n characters from the string pointed at
 * @dest: pointer to the destination array where the content is copied
 * @src: string 2B copied (i.e @src points to the string 2B copied)
 * @n: number of character 2B copied
 * Return: dest (the string that is copied i.e pointer to dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
