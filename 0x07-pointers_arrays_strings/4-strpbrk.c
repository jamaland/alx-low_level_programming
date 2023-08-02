#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - Entry point
 * Description: 'This program gets the length of a prefix substring.'
 * @s: Character
 * @accept: Char
 * Return: Char
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
