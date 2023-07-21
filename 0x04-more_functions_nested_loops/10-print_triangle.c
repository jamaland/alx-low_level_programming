#include "main.h"
/**
 * print_triangle - Entry point
 * Description: 'This program print numbers using an _putchar '
 * @n: integer
 * Return: Void
*/
void print_triangle(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		j = 0;
		while (j <= n)
		{
			if (j < (n - i))
				_putchar(' ');
			else
				_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
