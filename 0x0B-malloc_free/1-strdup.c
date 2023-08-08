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
	cp_str = strdup(str);
	if (str == NULL || cp_str == NULL)
	{
		return (NULL);
	}
	else
	{
		free(cp_str);
		return (strdup(str));
	}
}