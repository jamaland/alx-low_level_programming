#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * @n : a variable
 * Description: 'this is a c program'
 * Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d",i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d",i);
			if (i != 98)
				printf(", ");
		}
	}
	else 
		printf("%d",n);
	printf("\n");
}
