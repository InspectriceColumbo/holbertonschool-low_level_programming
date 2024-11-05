#include "main.h"
/**
*string_toupper - changes lowercase letters of a string to uppercase
*@str: parameter
*Return: char
*/

char *string_toupper(char *str)
{
	int c = 0;

	while (str[c++])
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] -= 32;
	}

	return (str);
}
