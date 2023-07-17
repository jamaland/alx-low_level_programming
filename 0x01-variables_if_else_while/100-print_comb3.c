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
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (j != i)
			{
				putchar(i + 48);
				putchar(j + 48);
				if ((i == 8) && (j == 9))
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
