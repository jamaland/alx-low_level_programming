#include <ctype.h>
/**
 * _isalpha - Entry point
 * @c: The  character to verify
 * Description: 'This program verify a character if is alphabetic '
 * Return: 1 (Success) 0 (failure)
*/
int _isalpha(char c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
