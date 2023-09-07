#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function that a frees a 2D array grid by alloc grid
 * @grid: a address of the grid
 * @height: the heigth of grid
 * Return: 0 success
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
