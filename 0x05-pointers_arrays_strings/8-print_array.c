#include <stdio.h>

/**
  * print_array - print elements of an array
  * @a: array to be printed
  * @n: size of array
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n - x != 1)
		{
			printf("%d, ", *(a + x));
		} else
		{
			printf("%d", *(a + x));
		}
	}

	printf("\n");
}
