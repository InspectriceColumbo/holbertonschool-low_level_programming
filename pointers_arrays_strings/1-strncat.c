#include "main.h"
/**
* _strncat - concatenates the string pointed to by @src to the end of
* the string pointed to by @dest
*@dest: string 2B concatenated to @src (by @src added to its end)
*@src: string 2B appended to end of @dest
*@n: max amount of src bytes 2B used (=max number of bytes used from src)
*Return: the pointer to the resulting concatenated string, i.e @dest
*/

char *_strncat(char *dest, char *src, int n)
{

	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
