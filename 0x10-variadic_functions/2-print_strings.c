#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Function
 * Description: 'This program return the sum of all Params'
 * @separator: Param of type char
 * @n: constant Integer
 * @...: Other Params
 * Return: Always void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
