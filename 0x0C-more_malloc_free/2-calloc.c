#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Entry point
 * Description: 'This program allocates meemory for array'
 * @nmemb: Param Integer
 * @size: Pram Integer
 * Return: Void or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, count1 = 0, count2 = 0;
	void *str;

	if (nemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++);
		str[i] = 0;
	return (str);
}
