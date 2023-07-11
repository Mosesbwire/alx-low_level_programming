#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - searche for value in array using binary search algorithm
 * @array: Array to search in
 * @size: length of array
 * @value: integer to search for in array
 * Return: index of array or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t mid;
	size_t index;

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (index = low; index <= high; index++)
		{
			printf("%d", array[index]);

			if (index < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] < value)
		{
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	return (-1);
}
