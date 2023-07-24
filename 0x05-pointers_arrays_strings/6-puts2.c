#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - Entry point
 * Description: 'This program prints every other character of a string,
 * starting with the first character, followed by a new line. '
 * @str: Pointer of a string
 * Return: Always void
*/
void puts2(char *str)
{
	int i, length = strlen(str) - 1;

	for (i = 0; i <= length; i += 2)
		printf("%c", str[i]);
	printf("\n");
}
