#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * _atoi - Entry point
 * Description: 'This program convert a string to an integer.'
 * @s: Pointer of a string
 * Return: Integer
*/
int _atoi(char *s)
{
	int i, l = strlen(s), num, n = 0, mul = 1;

	for (i = 0; i < l;  i++)
	{
		printf("s : %s, ", s);
		if (isdigit(s))
		{
			num = (int)s;
			n += (num * mul);
			mul *= 10;
		}
	       	else if (s == '-')
		{
			n *= -1;
		}
		s++;
	}
	return (1);
}
