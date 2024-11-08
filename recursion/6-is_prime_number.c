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

/**
 * is_prime_number - verifies that a number is a prime number
 * @n: The number to verify
 * Return: If the number is not prime: 0, if the number is prime return 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_divisible(n, 2));
}
