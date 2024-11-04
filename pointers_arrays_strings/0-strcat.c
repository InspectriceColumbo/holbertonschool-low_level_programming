#include "main.h"
/**
*_strcat - function that concatenates the string pointed to by @src to the end
*of the string pointed to by @dest
*@dest: string 2B appended
*@src: string 2B concatenated
* Return: returns a pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{

	int base = 0, dest_length = 0;

	while (dest[base++])
		dest_length++;

	for (base = 0; src[base]; base++)
		dest[dest_length++] = src[base];

	return (dest);
}
