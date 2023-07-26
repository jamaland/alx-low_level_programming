#include "main.h"
#include <string.h>
/**
 * _strncat - Entry point
 * Description: 'This program concatenates two strings'
 * @src: Pointer of char
 * @dest: Pointer of char
 * @n: Integer
 * Return: Char
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
