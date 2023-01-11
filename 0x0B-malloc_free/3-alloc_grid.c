#include <stdlib.h>

/**
  * alloc_grid - allocates memory space for a 2d array
  * @width: columns of the 2d array
  * @height: rows of the 2d array
  * Return: pointer to 2d array or NULL
  */

int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		arr[x] = (int *)malloc(width * sizeof(int));
		if (arr[x] == NULL)
		{
			while (x >= 0)
			{
				free(arr[x--]);
			}
			free(arr);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			arr[x][y] = 0;
		}
	}

	return (arr);
}
