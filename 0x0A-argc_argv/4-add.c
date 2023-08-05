#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 * @argc: size of arguments array
 * @argv: arry of params
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
