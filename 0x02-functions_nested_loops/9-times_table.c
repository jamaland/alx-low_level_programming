#include <time.h>
#include "main.h"
/**
 * times_table - Entry point
 * Description: 'This program show minutes '
 * Return: Always void (Success)
*/
void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			_putchar(((i * j)/10 ) + 48);
			_putchar('0' + ((i * j) % 10));
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('$');
		_putchar('\n');
		i++;
	}
}
