#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 * Description: 'This program concatenates two strings'
 * @s1: Pointer of type character
 * @s2: Pointer of type charachter
 * @n: Param of type unsigned int
 * Return: Pointer of type Charachter or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, count1 = 0, count2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[count1])
		count1++;
	while (s2[count2])
		count2++;
	if (n >= count2)
	{
		n = count2 + 1;
	}
	str = malloc(count1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < count1 + n; i++)
	{
		if (i < count1)
		{
			str[i] = *s1;
			s1++;
		}
		else
		{
			str[i] = *s2;
			s2++;
		}
	}
	str[i] = '\0';
	return (str);
}
