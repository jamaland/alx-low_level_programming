#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'the program's verify a number type'
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 27)
	{
		if (strcmp (alpha[i], "q") != 0 && strcmp (alpha[i], "e") != 0)
		putchar(alpha[i]);
		i++;
	}
	return (0);
}
