#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: 'This program print alphabet using an external function '
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		while (i < 26)
		{
			_putchar(i + 97);
			i++;
		}
		_putchar('\n');
	}
}
