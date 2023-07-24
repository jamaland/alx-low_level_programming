#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Entry point
 * Description: 'This program prints half of a string,
 * followed by a new line. '
 * @str: Pointer of a string
 * Return: Always void
*/
void puts_half(char *str)
{
	int i, length;

	if (strlen(str) % 2 == 0)
		length = strlen(str);
	else
		length = strlen(str) + 1;
	for (i = length / 2; i <= length - 1;  i++)
		printf("%c", str[i]);
	printf("\n");
}
