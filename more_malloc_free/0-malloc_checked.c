#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc function i.e allocates..
 * ..memory of size @b and checks if the allocation suceeds. If malloc fails..
 * .. malloc_checked causes normal process termination w a status value of 98
 * i.e if malloc returns NULL, malloc_checked terminates prog by calling exit
 * @b: size of the allocated memory block (in bytes)
 * Return: pointer to the adress of the allocated memory block 
 */

void *malloc_checked(unsigned int b)
{
	 void *memblock = malloc(b);
	 if (memblock == NULL)
	 {
		 exit(98);
	 }
	 return (memblock);
}
