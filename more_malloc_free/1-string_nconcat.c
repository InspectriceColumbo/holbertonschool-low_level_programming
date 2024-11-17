#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string (string to add to the first one)
 * @n: number of bytes
 * Return: result or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ccat;
	unsigned int length = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;

	ccat = malloc(sizeof(char) * (length + 1));

	if (ccat == NULL)
		return (NULL);

	length = 0;

	for (i = 0; s1[i]; i++)
		ccat[length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ccat[length++] = s2[i];

	ccat[length] = '\0';

	return (ccat);
}
