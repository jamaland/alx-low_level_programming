#include <stdio.h>
#include <string.h>
/**
 * _strchr - Entry point
 * Description: 'This program locates a charachter in a string.'
 * @s: Character
 * @c: Character
 * Return: char
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
