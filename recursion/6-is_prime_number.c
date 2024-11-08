#include "main.h"
/**
 * is_divisible - verifies that a number is a prime number or not
 * @num: the number to divise
 * @div: the number we divide @num with
 * Return: 1 if input int is a prime number, othermise return
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

