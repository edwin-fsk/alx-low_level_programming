#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - function that adds two integers
 * @a: int1
 * @b: int2
 *Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that substracts/minus(-) two integers
 * @a: int1
 * @b: int2
 *Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiplies(*) two integers
 * @a: int1
 * @b: int2
 *Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides(/) two integers
 * @a: int1
 * @b: int2
 *Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function that return the modulus(remainder) of two integers
 * @a: int1
 * @b: int2
 *Return: integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a % b);
}
