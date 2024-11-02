#include "main.h"
/**
* rev_string - function that reverses a string
* @s: String 2B reversed
* return: (void)
*/
void rev_string(char *s)
{
	int string = 0, base = 0;
	char tmp;

	while (s[base++])
		string++;

	for (base = string - 1; base >= string / 2; base--)
	{
		tmp = s[base];
		s[base] = s[string - base - 1];
		s[string - base - 1] = tmp;
	}
}
