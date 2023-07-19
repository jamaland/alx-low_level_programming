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
			_putchar((i / 10) + 48);
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar('0' +  (j % 10));
			_putchar('\n');
			j++;
		}
		i++;
	}
}
