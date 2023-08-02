#include <stdio.h>
#include <string.h>
/**
 * _strstr - Entry point
 * Description: 'This program locates a substring.'
 * @haystack: Character
 * @needle: Char
 * Return: Char
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
