#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * Description: 'This program allocates memory using malloc'
 * @b: Param of type unsigned int
 * Return: Void
*/
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
