#include <stdlib.h>
/**
 * int_index - Function
 * Description: 'This program search for an integer'
 * @array: Param of type int
 * @size: Size of array
 * @cmp: Param of type function
 * Return: Always void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) > 0)
				return (i);
	return (-1);
}
