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

	cp_str = malloc(sizeof(str));
	if (str == NULL || cp_str == NULL)
	{
		return (NULL);
	}
	else
	{
		free(cp_str);
		if (strdup(str) == NULL)
			return NULL;
		return (strdup(str));
	}
}
