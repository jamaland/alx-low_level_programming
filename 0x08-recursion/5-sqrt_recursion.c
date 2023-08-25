#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - Function.
 * @n: integer
 * Return: square of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - Function
 * @prev: Int
 * @root: Int
 * Return: square
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
