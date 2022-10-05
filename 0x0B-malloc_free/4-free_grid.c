#include "main.h"
#include <stdlib.h>

/**
 * free_grid - entry
 * Description: frees a  gr2-dimensional grid
 * @grid: grid to be freed
 * @height: height of grid
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
