#include <time.h>
#include "main.h"
/**
 * jack_bauer - Entry point
 * Description: 'This program show minutes '
 * Return: Always void (Success)
*/
void jack_bauer(void)
{
	int i = 0, j;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			if (i < 10)
				_putchar(48);
			_putchar(48 + i);
			_putchar(':');
			if (j < 10)
                                _putchar(48);
			_putchar(48 + j);
			if (i != 24 && j != 59)
				_putchar('\n');
			j++;
		}
		i++;
	}
}
