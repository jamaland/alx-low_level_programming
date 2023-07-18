#include "main.h"
/**
 * print_sign - Entry point
 * @n: The  character to verify
 * Description: 'This program verify a character sign of a number '
 * Return: 1 (Success) 0 (failure)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
