#include <stddef.h>
/**
  * array_iterator - transforms an array
  * @array: array
  * @size: size of array
  * @action: callback function
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}

}

