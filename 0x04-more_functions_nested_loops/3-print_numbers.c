#include "main.h"
/**
 * print_numbers - Entry point
 * Description: 'This program print numbers using an _putchar '
 * Return: Void
*/
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
