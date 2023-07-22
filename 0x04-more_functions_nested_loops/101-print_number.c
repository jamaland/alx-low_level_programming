#include "main.h"
/**
 * print_number - func
 * Description: 'the program's verify a number type'
 * @n: variable Number
 * Return: void
*/
void print_number(int n)
{
	if (n >= 10)
		_putchar(n / 10 + 48);
	_putchar(n % 10 + 48);
}
