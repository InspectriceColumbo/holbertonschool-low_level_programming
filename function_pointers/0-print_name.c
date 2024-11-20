#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - takes the string *name & pass it through the function pointed..
 * .. to by f. Basically print_name uses the function f to perform an action..
 * .. on name, in this case printing it. Btw name is null terminated '\0'.
 * @name: pointer to a string (a character array) that represents a name..
 * ..this arg expects a string, we can pass the string "Lou" to this parameter
 * @f: f is a pointer to a function that takes a char* (string) as..
 *..its argument and returns void.So this ptr can point to any function that..
 * .. matches this signature: it must accept a char* as input and return void.
 * Return: none (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(98);
	if (*f == NULL)
		exit(98);
	{                                                        f(name);
	}
}
