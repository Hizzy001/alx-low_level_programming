#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free the 2D array
 * @grid: the 2D grid
 * @height: height dimension of the grid
 * Description: frees memory of the grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
