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
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n", q[] = "q", e[] = "e";
	int i = 0;

	while (i < 27)
	{
		if (alpha[i] != q[0] && alpha[i] != e[0])
		putchar(alpha[i]);
		i++;
	}
	return (0);
}
