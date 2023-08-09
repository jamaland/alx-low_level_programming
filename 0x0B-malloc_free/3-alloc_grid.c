#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * Description: 'This program return a matrix'
 * @width: Integer 
 * @height: Integer
 * Return: Integer
*/
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (width <= 0 || height <=0)
		return (NULL);

	matrix = (int**)malloc(width * sizeof(int*));
	for (i = 0; i < width; i++)
		matrix[i] = (int*)malloc(height * sizeof(int*));
	if (matrix == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < width * height; i++)
			for (j = 0; j < height; j++)
				matrix[i][j] = 0;
		return (**matrix);
	}
}
