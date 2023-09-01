#include "holberton.h"

/**
 * binary_to_uint - This Program converts binary number to an unsigned integer
 * @b: Pointer
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base, res, n;

	base = 1;
	res = 0;
	n = 0;
	if (b == NULL)
		return (0);

	while (b[n])
		n++;

	while (n)
	{
		if (b[n - 1] != '0' && b[n - 1] != '1')
			return (0);

		if (b[n - 1] == '1')
			res += base;
		base *= 2;
		n--;
	}
	return (res);
}
