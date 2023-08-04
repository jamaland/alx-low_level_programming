#include <stdio.h>

/**
 * main - check the code
 * @argc: size of arguments array
 * @argv: arry of params
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
