#include "main.h"
/**
 * print_square - Entry point
 * Description: 'This program print numbers using an _putchar '
 * @n: integer
 * Return: Void
*/
void print_square(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
