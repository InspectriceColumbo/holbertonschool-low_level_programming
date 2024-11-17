#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * array_range - function that creates an array of integers
 * @min: first value of the array
 * @max: last value of the array
 * Return: ptr to the array
 */
int *array_range(int min, int max)
{
	int *memory;
	int i, j = 0;

	if (min > max)
		return (NULL);
	memory = malloc(sizeof(*memory) * ((max - min) + 1));
	if (memory != NULL)
	{
		for (i = min; i <= max; i++)
		{
			memory[j] = i;
			j++;
		}
		return (memory);
	}
	else
		return (NULL);

}
