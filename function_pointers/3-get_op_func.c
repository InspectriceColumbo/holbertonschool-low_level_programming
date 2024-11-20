#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation..
 * ..that is asked by the user i.e theres only 1 correct function per operator
 * @s: the operator passed as argument to the program
 * Return: ptr to the function that corresponds to the operator given as prmtr
 * Example: get_op_func("+") should return a pointer to the function op_add
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
