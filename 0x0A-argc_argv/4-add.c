#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: size of arguments array
 * @argv: arry of params
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
