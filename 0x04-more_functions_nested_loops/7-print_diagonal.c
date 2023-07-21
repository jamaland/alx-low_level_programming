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

	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
