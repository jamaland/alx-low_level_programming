#include <stdlib.h>
/**
 * array_iterator - Function
 * Description: 'This program '
 * @array: Param of type int
 * @size: Size of array
 * @action: Param of type function
 * Return: Always void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
