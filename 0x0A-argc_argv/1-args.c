#include <stdio.h>

/**
 * main - check the code
 * @argc: size of arguments array
 * @argv: arry of params
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (*argv[0])
		printf("%d\n", argc);
	return (0);
}
