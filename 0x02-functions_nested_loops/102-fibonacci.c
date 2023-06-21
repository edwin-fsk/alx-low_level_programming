#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib01 = 0, fib02 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib01 + fib02;
		printf("%lu", sum);

		fib01 = fib02;
		fib02 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
