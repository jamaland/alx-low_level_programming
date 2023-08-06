#include <stdio.h>
#include <string.h>
/**
 * _memset - Entry point
 * Description: 'This program capitalizes all words of a string.'
 * @s: Character
 * @b: Character
 * @n: unsigned int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n * sizeof(char));
	return (s);
}
