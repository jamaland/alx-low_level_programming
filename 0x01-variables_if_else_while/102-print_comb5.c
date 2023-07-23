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
	int i, j, k, l;

	for (i = 0; i < 10; i++)
		for (j = i; j < 10; j++)
			for (k = 0; k < 10; k++)
				for (l = k; l < 10; l++)
                                        if (l != j && l != i)
                                        {
                                                putchar(i + 48);
                                                putchar(j + 48);
						putchar(' ');
                                                putchar(k + 48);
                                                putchar(l + 48);
						if (i <= 9 && j < 8 && k <= 9 && l <= 9)
                                                putchar(',');
                                                putchar(' ');
                                	}
	putchar('\n');
	return (0);
}
