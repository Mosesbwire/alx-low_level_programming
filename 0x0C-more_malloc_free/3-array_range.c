#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: smallest value of array
  * @max: largest value of array
  * Return: pointer to allocated memory or NULL on failure
  */

int *array_range(int min, int max)
{
	int x, y;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	x = max - min;
	y = 0;

	while (y <= x)
	{
		ptr[y] = min;

		y++;
		min++;
	}

	return (ptr);
}
