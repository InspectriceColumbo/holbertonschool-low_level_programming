#include "3-calc.h"

/**
 * op_add - Sums two numbers, @a and @b
 * @a: num1
 * @b: num2
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substracts number @b from number @a
 * @a: num1
 * @b: num2
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies number @a by number @b
 * @a: num1
 * @b: num2
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divises number @a by number @b
 * @a: num1
 * @b: num2
 * Return: Result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the modulo
 * @a: num1
 * @b: num2
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
