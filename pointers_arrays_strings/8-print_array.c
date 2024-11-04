#include "main.h"
#include <stdio.h>
/**
* print_array - *Prints n number of elements of an array of ints
* @a: the array of ints
* @n: number of elements 2B printed
*/
void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);

		if (array == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
