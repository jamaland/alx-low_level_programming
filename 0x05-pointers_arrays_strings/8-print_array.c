#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - Entry point
 * Description: 'This program prints n elements of an array of integers,
 * followed by a new line. '
 * @a: Integer
 * @n: Integer
 * Return: Always void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n;  i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
