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
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 28;

	while (i >= 0)
	{
		putchar(alpha[i]);
		i--;
	}
	return (0);
}
