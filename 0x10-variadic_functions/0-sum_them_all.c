#include <stdarg.h>
/**
 * sum_them_all- Function
 * Description: 'This program return the sum of all Params'
 * @n: Param of type char
 * @...: Param of type Integer
 * Return: Always void
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
