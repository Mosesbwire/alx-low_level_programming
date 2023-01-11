#include <stdlib.h>

/**
  * create_array - creates array of chars initialized with a specific char
  * @size: size of the array
  * @c: char to be put in array
  * Return: pointer to array otherwise NULL
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}


	return (array);
}
