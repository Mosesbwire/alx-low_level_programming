#include <stdlib.h>

/**
  * free_grid - function to free a 2d array
  * @grid: pointer to 2d array
  * @height: height of 2d array
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL || height != 0)
	{
		for (x = 0; x < height; x++)
		{
			free(grid[x]);
		}

		free(grid);
	}
}
