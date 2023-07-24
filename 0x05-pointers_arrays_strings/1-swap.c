#include "main.h"
/**
 * swap_int - Entry point
 * Description: 'This program swaps the values of two integers. '
 * @a: Pointer of Integer
 * @b: Pointer of Integer
 * Return: Always void
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
