#include <ctype.h>
#include "main.h"
/**
 * _isdigit - func
 * Description: 'the program's verify a number type'
 * @c: variable character
 * Return: 1 (true) 0(false)
*/
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
