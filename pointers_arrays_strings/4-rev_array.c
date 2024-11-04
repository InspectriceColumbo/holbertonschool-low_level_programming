#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: the array of integers (whose content needs 2B reversed)
 * @n: the content i.e the number of elements to reverse
 * Return: nothing (void)
 */
void reverse_array(int *a, int n)
{
    int array = 0;
	char tmp;

	while (a[n++])
		array++;

	for (n = array - 1; n >= array / 2; n--)
	{
		tmp = a[n];
		a[n] = a[array - n - 1];
		a[array - n - 1] = tmp;
	}
}
