#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup -returns a pointer to a new string that is a copy of the string @str
* Memory for the new string is obtained w malloc() & can be freed with free()
* malloc()- allocates size bytes and returns a pointer to the allocated memory
* free()- frees the memory space pointed to by ptr, which must have been...
* ..returned by a previous call to malloc()
* @str: string that needs 2B duplicated
*
* Return: NULL if str=NULL or insufficient memory available, otherwise..
* ..Return a pointer to the newly allocated space in memory i.e the new string
*/
char *_strdup(char *str)
{
	int length;
	char *copy;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length] != '\0'; length++)
	{
		continue;
	}

	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}

	copy[length] = '\0';

	return (copy);
}
