#include "main.h"
/**
 * _strcmp - Compares the pointers to two strings
 * @*s1: The pointer to the first string 2B compared
 * @*s2: The pointer to the second string 2B compared
 * The comparison  is  done  using  un‐signed characters
 * Return: always an integer (neg, 0 or pos)
 *If str1 <str2, a negative value: the difference of the first unmatched chars
 *If str1 == str2, 0.
 *If str1 >str2, a positive value: the difference of the first unmatched chars
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
