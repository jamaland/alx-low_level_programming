#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * Description: 'This program create an array of chars'
 * @str: Param of type char
 * Return: Char
*/
char *_strdup(char *str)
{
	char *cp_str;
	int size = 0;

	while (*str)
	{
		size++;
		str++;
	}
	str = str - size;
	cp_str = malloc(sizeof(char) * (size + 1));
	if (str == NULL || cp_str == NULL)
	{
		return (NULL);
	}
	else
	{
		free(cp_str);
		if (strdup(str) == NULL)
			return (NULL);
		return (strdup(str));
	}
}
