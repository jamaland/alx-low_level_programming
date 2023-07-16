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
	char digits[] = "0123456789";
	int i = 0;

	while (i < 10)
	{
		putchar(digits[i]);
		i++;
	}
	putchar("\n");
	return (0);
}
