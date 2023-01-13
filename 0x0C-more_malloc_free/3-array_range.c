#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: smallest value of array
  * @max: largest value of array
  * Return: pointer to allocated memory or NULL on failure
  */

int *array_range(int min, int max)
{
	int x, z;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	z = max - min + 1;
	ptr = malloc(sizeof(int) * z);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < z; x++, min++)
	{
		ptr[x] = min;
	}
	return (ptr);
}
