#include "main.h"
#include <stdlib.h>
/**
 * _puts_recursion - Function
 * Description: 'This program prints a string recursevly'
 * @s: Param of type char
 * Return: Always void
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		puts(*s);
		_puts_recursion(s + 1);
	}
	else
		puts('\n');
}
