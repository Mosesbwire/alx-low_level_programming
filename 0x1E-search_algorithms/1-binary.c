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
	size_t new_size;
	size_t mid;
	size_t index;
	int *new_array;

	mid = size / 2;
	
	printf("Searching in array: ");
	for (index = 0; index < size; index++)
	{
		printf("%d, ", array[index]);
	}
	printf("\n");

	if (array[mid] == value)
	{
		return (array[mid]);
	}

	if (size == 1 && array[0] == value)
	{
		return (array[0]);
	}

	if (size == 1 && array[0] != value)
	{
		return (-1);
	}

	if (array[mid] < value)
	{
		new_array = &array[mid + 1];
		new_size = size - (mid + 1);
	} else {
		new_array = array;
		new_size = mid;
	}

	return binary_search(new_array, new_size, value);

	return (-1);

}
