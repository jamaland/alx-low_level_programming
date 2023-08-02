#include <stdio.h>
/**
 * print_chessboard - Entry point
 * Description: 'This program print the chessboard.'
 * @a: Char
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}
}
