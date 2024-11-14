#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2D array(grid) previously created by alloc_grid function
* @grid: the 2D array 2B freed to get more memory
* @height: height of the array
* Return: none (void)
*/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
