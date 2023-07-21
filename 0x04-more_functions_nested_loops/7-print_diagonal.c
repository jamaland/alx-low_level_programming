#include "main.h"
/**
 * print_diagonal - Entry point
 * Description: 'This program print numbers using an _putchar '
 * @n: integer
 * Return: Void
*/
void print_diagonal(int n)
{
	int i = 0, j;

	while (i <= n)
	{
		j = 0;
		while (j <= i)
		{
			_putchar(' ');
			if (j == i-1)
				_putchar('\\');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
