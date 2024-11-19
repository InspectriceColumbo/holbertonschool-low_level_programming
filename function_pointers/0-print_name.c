#include <stdio.h>
#include "function_pointers.h"
/**
 * _putchar - prints a char
 * @c : char parameter
 * Return : 0
 */
int _putchar(char c)
{
	_putchar(c);
	return 0;
}
/**
 * print_chars - prints each char of the string @name using _putchar
 * @name: string representing the name 2B printed
 * Return : void
 */
void print_chars(char *name)
{
		while (*name)
		_putchar(*name);
		name++;
	_putchar('\0');
	_putchar('\n');
}

#include <stdio.h>
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
	{
		f(name);
	}
	print_name("Name", print_chars);
}
