
#include <ctype.h>
/**
 * _islower - Entry point
 * @c: The character to print  character to verify
 * Description: 'This program verify a character if is lowercase '
 * Return: 1 (Success) 0 (failure)
*/
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
