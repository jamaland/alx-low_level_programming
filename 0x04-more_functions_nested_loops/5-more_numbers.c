#include "main.h"
/**
 * more_numbers - Entry point
 * Description: 'This program print numbers using an _putchar '
 * Return: Void
*/
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j < 10)
				_putchar(j + 48);
			else
			{
				_putchar(49);
				_putchar((j % 10) + 48);
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
