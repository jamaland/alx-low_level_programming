#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Function
 * Description: 'This program return the sum of all Params'
 * @separator: Param of type char
 * @n: constant Integer
 * @...: Other Params
 * Return: Always void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
