#include "main.h"
#include <string.h>
/**
 * _strncpy - Entry point
 * Description: 'This program concatenates two strings'
 * @src: Pointer of char
 * @dest: Pointer of char
 * @n: Integer
 * Return: Char
*/
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
