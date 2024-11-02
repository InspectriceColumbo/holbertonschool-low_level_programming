#include "main.h"
/**
 * print_diagonal - function that prints a diagonal line
 * @n: number of time to print the character \
 *
 */

void print_diagonal(int n)
{
int diag, espace;
if (n > 0)
{
for (diag = 0; diag < n ; diag++)
{
for (espace = 0; espace < diag; espace++)
_putchar (' ');
_putchar('\\');

if (diag == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
