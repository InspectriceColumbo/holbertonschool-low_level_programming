#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: the array of integers (whose content needs 2B reversed)
 * @n: the content i.e the number of elements to reverse
 * Return: nothing (void)
 */
void reverse_array(int *a, int n)
{
int i;
int tmp;

for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
