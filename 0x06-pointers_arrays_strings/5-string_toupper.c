#include <ctype.h>
#include <string.h>
/**
 * string_toupper - Entry point
 * Description: 'This program changes all lowercase letters of a string to uppercase.'
 * @str: Pointer of char
 * Return: Char
 */
char *string_toupper(char *str)
{
	int i, n = strlen(str);

	for (i = 0; i < n; i++)
		str[i] = toupper(str[i]);
	return (str);
}
