#include "main.h"
/**
*_strcat - concatenates the string pointed to by @src to the end of the string pointed to by @dest
* La fonction lie le string src au string dest. Comment?* En ajoutant/joignant/apposant le string src à la fin du string dest
*@dest: string 2B concatenated to @src (by @src added to its end)
*@src: string 2B appended to end of @dest
* Return: the pointer to the resulting string, i.e @dest
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
