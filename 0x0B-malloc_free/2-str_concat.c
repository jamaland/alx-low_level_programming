#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * Description: 'This program concat two strings'
 * @s1: Param of type char
 * @s2: Param of type char
 * Return: Char
*/
char *str_concat(char *s1, char *s2)
{
	char *cp_str;
	int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1)
	{
		size1++;
		s1++;
	}
	while (*s2)
	{
		size2++;
		s2++;
	}
	cp_str = malloc(sizeof(char) * (size1 + size2 + 1));
	if (cp_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1; i++)
			cp_str[i] = *(s1 - size1 + i);
		for (; i < size1 + size2; i++)
			cp_str[i] = *(s2 - size2 + i);
		cp_str[i] = '\0';
		if (cp_str == NULL)
			return (NULL);
		return (cp_str);
	}
}
