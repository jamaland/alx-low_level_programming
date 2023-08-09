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
	int size = 0, i;

	while (*str)
	{
		size++;
		str++;
	}
	str = str - size;
	cp_str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
	       return (NULL);
	if (cp_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			cp_str[i] = *(str + i);
		cp_str[i] = '\0';
		if (cp_str == NULL)
			return (NULL);
		return (cp_str);
	}
}
