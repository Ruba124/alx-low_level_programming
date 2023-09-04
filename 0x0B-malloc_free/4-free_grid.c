#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function
 * @grid:array
 * @height:int
 * Return:o
 */
void free_grid(int **grid, int height)
{
	int r;

	if (grid == NULL || height == 0)
		return;
	for (r = 0; r < height; r++)
		free(grid[r]);

	free(grid);
}
