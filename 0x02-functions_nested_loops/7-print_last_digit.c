#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: The arg of func 
 * Description: 'This program verify the entred arg '
 * Return: Always n (Success)
*/
int print_last_digit(int n)
{
	int result = abs(n % 10);

	_putchar('0' + result);
	return (result);
}
