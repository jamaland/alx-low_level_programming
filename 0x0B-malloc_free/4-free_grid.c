#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Entry point
 * Description: 'This program free a matrix'
 * @grid: array of Integer
 * @height: Integer
 * Return: Void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
