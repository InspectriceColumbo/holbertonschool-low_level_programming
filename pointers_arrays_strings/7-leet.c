#include "main.h"

/**
*leet - encodes a string to 1337
*@str:string that will be encoded
*Return: (pointer to) encoded string
*/

char *leet(char *str)
{
	int intA = 0;
	int intB;
	char l[5] = {'A', 'E', 'O', 'T', 'L'};

	while (str[intA])
	{
		for (intB = 0; intB <= 7; intB++)
		{
			if (str[intA] == l[intB] ||
			    str[intA] - 32 == l[intB])
				str[intA] = intB + '0';
		}

		intA++;
	}

	return (str);
}
