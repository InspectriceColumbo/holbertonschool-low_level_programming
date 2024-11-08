#include "main.h"
/**
 * _sqrt - finds the square root of @number
 * @number: number we want to find the sqr of
 * @root: the root
 * Return: natural square root of @n, if @n does not have a nsr return -1.
 *
 * _sqrt_recursion - returns natural (integer) square root of a number (nsqr)
 * The nsqr= an integer square root of an integer (positive or zero) number
 * So the nsqr is always a positive number or zero, it cannot be negative
 * The nsqr is the largest integer x such that x^2 <= n. 
 * @n: the number we want to find the nsqr of 
 * Return: natural square root of @n, if @n does not have a nsr return -1.
 */

int _sqrt(int number, int root)
{
	if ((root * root) == number)
		return (root);

	if (root == number / 2)
		return (-1);
	return (_sqrt(number, root + 1));
}

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
