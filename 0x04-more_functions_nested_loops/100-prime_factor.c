#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 *main -main entry.
 *void: nothing
 *Description: Print max prime number
 * Return: void
 **/

int main(void)
{
	long int maxNum = 20;
	long int y;

	while (maxNum % 2 == 0)
	{
		maxNum = maxNum / 2;
	}

	for (y = 3; y < sqrt(maxNum); y = y + 2)
	{
		while (maxNum % y == 0)
		{
			maxNum = maxNum / y;
		}
	}
	printf("%li", maxNum);
	return (0);
}
