#include "stdio.h"
/**
 * main - print the number of arguments passed into the program
 * @argc: the argument count
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
