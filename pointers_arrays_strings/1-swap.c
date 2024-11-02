#include "main.h"
/**
* swap_int - function that swaps the value of two ints
* @a: 1st int 2B swapped
* @b: 2nd int 2B swapped
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
