#include "main.h"
#include <stdio.h>
/**
* _strcpy - function that copies the string pointed to (by src)
* @dest: Array, points to the buffer
* @src: points to the string to copy
* Return: the string that is copied (pointer to dest)
*/
char *_strcpy(char *dest, char *src)
{
	int ch = 0;

	while (1)
	{
	dest[ch] = src[ch];
	if (src[ch] == '\0')
		break;
	ch++;
	}

	return (dest);
}
