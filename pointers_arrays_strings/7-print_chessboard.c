#include "main.h"
/**
 * print_chessboard - function prints 8x8 chessboard
 * @a: pointer to array of 8 characters
 * Return: nothing (void)
 */

void print_chessboard(char (*a)[8])
{
	int i, m;

	for (i = 0; i < 8; i++)
	{

		for (m = 0; m < 8; m++)
		_putchar(a[i][m]);
		_putchar('\n');
	}
}
