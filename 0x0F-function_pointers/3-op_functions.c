#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum of two Integers.
 * @a: Param integer
 * @b: Param integer
 * Return:  a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract of two Integers.
 * @a: integer
 * @b: integer
 * Return: a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply of two int.
 * @a: integer
 * @b: integer
 * Return: a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -divide two Integers.
 * @a: integer
 * @b: integer
 * Return: a / b.
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
 * op_mod - module of a and b.
 * @a: integer
 * @b: integer
 * Return: a % b.
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
