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
	int i, sum = 0, num;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (isdigit(*argv[i]) == 0)
			{
				printf("Error\n");
                                return (1);
			}
			else
			{
				printf("num: %d\n",num);
                                sum += num;
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
