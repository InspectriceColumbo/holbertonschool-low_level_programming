#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - concatenates (add) the string pointed to by @s2 to the end of..
* ..the string pointed to by @s1
* @s1: string 2B concatenated to by @s2 added to its end
* @s2: string 2B appended to the end of @s1
* Return: NULL if failure, or pointer to concatenation's resulting string
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char *newstring;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len1++;

	newstring = malloc(len1 * sizeof(char));

	if (newstring == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		newstring[len2++] = s1[i];

	for (i = 0; s2[i]; i++)
		newstring[len2++] = s2[i];

	return (newstring);
}
