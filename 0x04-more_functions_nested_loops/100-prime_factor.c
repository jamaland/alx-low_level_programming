#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program print the prime factors of a number'
 * Return: Always (0)
*/
int main(void)
{
	long int i = 0, j, n = 1231952;

	while (i < n)
	{
		if (n % i == 0)
		{
			j = 2;
			while(j <= i / 2)
			{
				if (j % i == 0)
					printf("%ld\n", i);
				j++;
			}
		}
		i++;
	}
	return (0);
}
