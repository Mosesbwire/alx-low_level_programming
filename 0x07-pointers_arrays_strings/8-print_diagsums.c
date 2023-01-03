#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals in a 2d matrix
  * @a: 2d array
  * @size: size of the array
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int sum_right = 0;
	int sum_left = 0;
	int i;
	int j;
	int k;

	k = 0;
	for (i = 0; i < size; i++)
	{
		sum_right += *(a + k);

		k += (size + 1);
	}

	k = size - 1;
	for (j = 0; j < size; j++)
	{
		sum_left += *(a + k);

		k += (size - 1);
	}

	printf("%d, %d\n", sum_right, sum_left);

}
