#include "main.h"
/**
 * more_numbers - Entry point
 * Description: 'This program print numbers using an _putchar '
 * Return: Void
*/
void more_numbers(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		while (j <= 14)
		{
			_putchar(i + 48);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
