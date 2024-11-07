#include "main.h"
/**
 * _memcpy - copies n bytes from the memar pointed to by @src to
 * the memar pointed to by @dest
 * @src : the memar from which we copy n bytes
 * @dest : the memar to which we copy n bytes
 * @n : the number of bytes of the memar @src to copy to the memar @dest
 * Return: pointer to @dest (the memar in which we copied n bytes from @src)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
