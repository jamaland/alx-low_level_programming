#include "main.h"
/**
 * _strlen_recursion - Function
 * Description: 'This program prints the length of a string'
 * @s: Param of type char
 * Return: Length of string
*/
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
