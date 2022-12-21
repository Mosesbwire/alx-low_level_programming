/**
  * reverse_array - reverse elements of an array
  * @a: array to reverse
  * @n: number of elements in array
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int loopvar = n / 2;
	int x;
	int tempval;

	for (x = 0; x < loopvar; x++)
	{
		tempval = *(a + x);

		*(a + x) = *(a + (n - 1));

		*(a + (n - 1)) = tempval;

		n--;
	}
}
