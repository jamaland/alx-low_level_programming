#include <ctype.h>
#include "main.h"
/**
 * _isupper - func
 * Description: 'the program's verify a number type'
 * @c: variable character
 * Return: 1 (true) 0(false)
*/
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}
