#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * jump_search - searches for int in an array using jump search algorithm
 * @array: pointer to first index of array
 * @size: length of array
 * @value: interger to look for in array
 * Return: index of value or -1
 */


int jump_search(int *array, size_t size, int value)
{
	size_t block;
	size_t high;
	size_t low;
	int found;

	block =  (size_t)sqrt(size);
	high = 0, low = 0;
	found = 1;
	while (low < size)
	{
		if (array[high] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", high, array[high]);
			low = high;
			high += block;
		} else
		{
			if (found == 1)
			{
				printf("Value found between indexes [%ld] and [%ld]\n", low, high);
				found = 0;
			}
			printf("Value checked array[%ld] = [%d]\n", low, array[low]);
			low += 1;
		}
		if (high > size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			printf("Value checked array[%ld] = [%d]\n", low, array[low]);
			return (-1);
		}
		if (array[low] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", low, array[low]);
			return (low);
		}
		if (array[low] > value)
			return (-1);
	}
	return (-1);
}
