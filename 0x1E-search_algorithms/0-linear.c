#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches for a given value in an array
 * @array: data structure to look up value in
 * @size: length of array
 * @value: integer to look for in array
 * Return: index of value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);
		}
	}

	return (-1);
}
