#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - Function
 * Description: 'This program print all Params'
 * @format: format of passed Param
 * @...: Other Params
 * Return: Always void
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	int i = 0, flag = 1;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		flag = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				flag = 0;
				break;
		}
		if (flag == 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
