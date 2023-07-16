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
	char alpha[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(alpha[i]);
		i++;
	}
	putchar(10);
	return (0);
}
