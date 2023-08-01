#include <stdio.h>
#include <string.h>
/**
 * _memcpy - Entry point
 * Description: 'This program copies memory area.'
 * @dest: Character
 * @src: Character
 * @n: unsigned int
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n * sizeof(char));
	return (dest);
}
