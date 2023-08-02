#include <stdio.h>

/**
 * print_diagsums - This program  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: Integers
 * @size: size of matrix
 * Return: Void
*/
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum_rev = 0;

	for (i = 0; i < size; i++)
		sum += a[i][i];
	for (i = 0; i < size; i++)
		sum_rev += a[i][(size - 1) - i];
	printf("%d, %d\n", sum, sum_rev);
}
