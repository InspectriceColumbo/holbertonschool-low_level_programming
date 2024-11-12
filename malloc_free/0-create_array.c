#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - creates an array of chars. Is initialized w a specific char
* @size: the array's size
* @c: specific char that initializes array 
* Return: if size =0 or if failure, return 0 otherwise return pointer to array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
