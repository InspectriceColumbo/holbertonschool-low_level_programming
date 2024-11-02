#include <stdio.h>
/**
 * main - prints numbers 1 to 100 but for * of 3, prints 'Fizz' instead of the number and for * of 5, prints 'Buzz'.
 * Also for numbers that are * of 3 AND * of 5, prints 'FizzBuzz'.
 * Return: always 0
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3) == 0 && (number % 5) == 0)
			printf("FizzBuzz");

		else if ((number % 3) == 0)
			printf("Fizz");

		else if ((number % 5) == 0)
			printf("Buzz");

		else
			printf("%d", number);

		if (number == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
