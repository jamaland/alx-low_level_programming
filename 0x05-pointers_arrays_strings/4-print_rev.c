#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Entry point
 * Description: 'This program prints a string,
 * in reverse, followed by a new line. '
 * @s: Pointer of char
 * Return: Always void
*/
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i > 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
