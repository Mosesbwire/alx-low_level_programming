
/**
  * int_index - searches for integer in an array
  * @array: array
  * @size: size of array
  * @cmp: callback function
  * Return: index of first int found or -1 if no int found
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}

	return (-1);
}
