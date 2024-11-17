#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @size: the size of the memory 2B print
 * @nmemb: The number of elements
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			memory[i] = 0;
		return (memory);
	}
	else
		return (NULL);
}
