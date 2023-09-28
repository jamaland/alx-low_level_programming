#include "main.h"
#include <stdlib.h>
/**
 * print_binary - This Function prints a binary number without % or /
 * @n: Param to print
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
