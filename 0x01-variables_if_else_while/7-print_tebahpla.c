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
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 27;

	while (i >= 0)
	{
		putchar(alpha[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
