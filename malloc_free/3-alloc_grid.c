#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array (grid) of integers
* Each element of the grid should be initialized to 0
* @width: width of the array
* @height: height of the array
* Return: NULL if failure, width/height= 0/neg. Otherwise pointer to the array
*/
int **alloc_grid(int width, int height)
{
