#include <stdlib.h>

/**
 * free_grid - frees previously allocated mem by alloc_grid
 * @grid: to free
 * @height: height of the grid
 *
 * Return: nothing
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
