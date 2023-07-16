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
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		putchar(', ');
		i++;
	}
	putchar(10);
	return (0);
}
