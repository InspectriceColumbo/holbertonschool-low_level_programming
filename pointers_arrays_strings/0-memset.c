#include "main.h"
/**
 * _memset - fills the first n bytes of the memoryarea pointed to by @s with b
 * @s: pointer to the block of memory area
 * @b : the constant byte (the value to set in each byte of the memory block)
 * @n : the number of bytes of the memory area to fill with the value @b
 * Return: the pointer to @s (i.e the memory area, fno called 'memar')
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
