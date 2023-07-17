#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's verify a number type'
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (i != j)
			{
				for (k = j; k < 10; k++)
				{
					if (k != j)
					{
						putchar(i + 48);
						putchar(j + 48);
						putchar(k + 48);
						if ((i == 7) && (j == 8) && (k == 9))
						break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
