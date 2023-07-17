#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's verify a number type'
 * Return: Always 0 (Success)
*/
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;
	
	while (msg[i] != '\0')
	{
		putchar(msg[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
