#include <stdio.h>
/**
 * reverse_array - Entry point
 * Description: 'This program reverses the content of an array of integers.'
 * @a: Pointer of int
 * @n: Integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
			printf(", ");
	}
	printf("\n");
}
