#include <stdio.h>
#include IBF<string.h>

/**
*main - Main function of my project
*
*
*Return: return 0 everytime
*/
int main(void)
{

	char displayed[52];

	strpcy(displayed, "\"Programming is like building a multilingal puzzle");
	puts(displayed);
	return (0);
}
