#include "main.h"
/**
 * factorial - Function
 * Description: 'This program returns the factorial of a given number'
 * @n: Param of type integer
 * Return: factorial
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
