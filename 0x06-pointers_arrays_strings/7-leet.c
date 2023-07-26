#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * leet - Entry point
 * Description: 'This program encodes a string into 1337.'
 * @str: Character
 * Return: void
 */
char *leet(char *str)
{
	int i, j, n, m;
	char keys[5][3] = {{'a', 'A', '4'}, {'e', 'E', '3'},
		{'o', 'O', '0'}, {'t', 'T', '7'}, {'l', 'L', '1'}};

	n = strlen(str);
	m = strlen(keys[0]);
	for (i = 0; i < n; i++)
	{
		for (j = 0 ; j < m; j++)
			if (str[i] == keys[j][0] || str[i] == keys[j][1])
				str[i] = keys[j][2];

	}
	return (str);
}
