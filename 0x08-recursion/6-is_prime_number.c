#include "main.h"

int is_divisible(int num, int div);

/**
 * is_prime_number - Function
 * @n: Integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int sub = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, sub));
}

/**
 * is_divisible - Function
 * @num: Int
 * @div: Int
 * Return: 1 or 0
*/
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
