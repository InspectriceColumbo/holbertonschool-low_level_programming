#include "main.h"
/**
 * _pow_recursion - uses a recursive method to calculate the power of a number
 * function calculates recursively base^exponent, i.e x^y. If y = 0, result= 1
 * @x: base, i.e the number we want to calculate the power of
 * @y: exponent, i.e the number of times the base @x is multiplied by itself
 * Return: value of x^y and if y < 0 return -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return x * _pow_recursion(x, y - 1);
	}
}
