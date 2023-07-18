#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: 'This program print alphabet using an external function '
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar(i + 97);
		i++;
	}
	_putchar('\n');
}
