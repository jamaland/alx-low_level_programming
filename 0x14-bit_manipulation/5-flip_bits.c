#include "main.h"

/**
 * flip_bits - Function returns the number of bits you would
 * @n: Unsigned long int number.
 * @m: Seconde unsigned long int number.
 * Return: bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
