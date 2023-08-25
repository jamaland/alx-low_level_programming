#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 *_strlen_recursion - Function
 * @s: String
 * Return: Integer
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - Function
 * @s: String
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - Function
 * @s: string
 * @len: Integer
 * Return: String reversed
 */
int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (helper_palindrome(s + 1, len - 2));
	}
	else
		return (0);

}
