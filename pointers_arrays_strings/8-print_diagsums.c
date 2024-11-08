#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of the two diagonals of a square matrix of ints
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 * Return: none (void) 
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sdiag1 = 0;
	int sdiag2 = 0;

	for (i = 0; i < size; i++)
	{
		sdiag1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sdiag2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sdiag1, sdiag2);
}
