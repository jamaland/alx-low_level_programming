#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * cap_string - Entry point
 * Description: 'This program capitalizes all words of a string.'
 * @str: Character
 * Return: void
 */
char *cap_string(char *str)
{
	int i, j, n, m;
	char sep[] = {'\t', '\n', ' ', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'}, *cap;

	n = strlen(str);
	m = strlen(sep);
	cap = (char *) malloc(n);
	strcpy(cap, str);
	for (i = 0; i < n; i++)
	{
		if (isalpha(str[i]) != 0)
			for (j = 0 ; j < m; j++)
				if (str[i - 1] == sep[j] || isdigit(str[i - 1]))
					cap[i] = toupper(str[i]);

	}
	return (cap);
}
