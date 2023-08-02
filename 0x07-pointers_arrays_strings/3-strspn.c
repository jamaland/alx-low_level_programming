#include <stdio.h>
#include <string.h>
/**
 * _strspn - Entry point
 * Description: 'This program gets the length of a prefix substring.'
 * @s: Character
 * @accept: Char
 * Return: Char
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
