#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function dat executes a function given as a parameter on..
 * ..each element in the array @array
 * @array: pointer to the first element of an integer array
 * @size: size of @array, i.e number of elements in the array, type size_t
 * @action: pointer to a function taking an int as arg and returning nothing
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		exit(98);/** ou juste'return;' sans rien*/
	if (*action == NULL)
		exit(98);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
