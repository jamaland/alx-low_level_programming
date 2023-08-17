#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Function
 * Description: 'This program prints a name'
 * @name: Param of type char
 * @f: Param of type func
 * Return: Always void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
