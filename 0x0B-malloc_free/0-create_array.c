#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * create_array - Entry point
 * Description: 'This program create an array of chars'
 * @size: Param of type unsigned int
 * @c: Param of type char
 * Return: Char
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		str = malloc(size * sizeof(char));
		while (i < size)
		{
			str[i] = c;
			i++;
		}
		return (str);
	}
}
