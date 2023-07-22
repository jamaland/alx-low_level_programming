#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program print the prime factors of a number'
 * Return: Always (0)
*/
int main(void)
{
	int i = 0, j, n = 612852475143;

	while (i < n)
	{
		if (n % i == 0)
			printf("%d\n", i);
		i++;
	}
	return (0);
}
