#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: memory of a 2D arrays.
 * @height: height of array.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
