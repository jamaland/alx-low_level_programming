#include "main.h"
#include <stdlib.h>
/**
 * array_range - Entry point
 * Description: 'This program creates an array of int'
 * @min: Parm minimum
 * @max: Pram maximum
 * Return: Integer or NULL
*/
int *array_range(int min, int max)
{
	int i;
	int *str;

	if (min > max)
		return (NULL);
	str = malloc(sizeof(int) * (max - min) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		str[i] = min;
		min++;
	}
	return (str);
}
