#include "main.h"

/**
 * set_bit - Function set value 1 bit at a given index.
 * @n: pointer unsigned long int.
 * @index: bit index.
 * Return: 1 or -1 .
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
