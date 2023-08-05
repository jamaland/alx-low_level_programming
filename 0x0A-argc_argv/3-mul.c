#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: size of arguments array
 * @argv: array of params
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
	return (1);
}
