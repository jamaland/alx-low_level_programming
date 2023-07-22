#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program print the prime factors of a number'
 * Return: Always (0)
*/
int main(void)
{
	long int i = 2, j, n = 612852475143, flag;

	while (i <= n)
	{
		if (n % i == 0)
		{
			j = 2;
			flag = 0;
			while (j <= i / 2)
			{
				if (i % j == 0)
					flag = 1;
				j++;
			}
			if (flag == 0)
				printf("%ld\n", i);

		}
		i++;
	}
	return (0);
}
