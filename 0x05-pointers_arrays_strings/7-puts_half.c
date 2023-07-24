#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Entry point
 * Description: 'This program prints half of a string, followed by a new line. '
 * @str: Pointer of a string
 * Return: Always void
*/
void puts_half(char *str)
{
	int i, length = strlen(str);

	for (i = length / 2; i < length;  i++)
		printf("%c", str[i]);
	printf("\n");
}
