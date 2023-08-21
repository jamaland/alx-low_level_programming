#include "main.h"
/**
 * _pow_recursion - Function
 * Description: 'This program returns x^y'
 * @x: Param of type integer
 * @y: Param of type integer
 * Return: x^y
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
