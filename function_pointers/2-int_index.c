#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @size: number of elements in the array @array
 * @array: the array in which the integer is searched for
 * @cmp: pointer to the function to be used to compare values
 * Return: index of first element for which @cmp does NOT return 0
 * Return -1 if no elements match or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
		return (-1);
}
