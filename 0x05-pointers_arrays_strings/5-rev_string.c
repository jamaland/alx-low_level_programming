#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Entry point
 * Description: 'This program reverses a string. '
 * @s: Pointer of a string
 * Return: Always void
*/
void rev_string(char *s)
{
	int i, length = strlen(s) - 1;
	char c;

	for (i = 0; i <= length / 2; i++)
	{
		c = s[i];
		s[i] = s[length - i];
		s[length - i] = c;
	}
}
