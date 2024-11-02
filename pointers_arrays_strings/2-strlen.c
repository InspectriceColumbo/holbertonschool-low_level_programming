#include "main.h"
#include <stdio.h>
/**
*_strlen - function that returns the length of a string
* @s: the string
*Return: returns the length
*/
int _strlen(char *s)
{
int count, inc;

inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
