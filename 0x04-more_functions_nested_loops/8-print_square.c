#include "main.h"
/**
  * print_square - prints square
  * @size: width of the square
  *
  * Return: void
  */

void print_square(int size)
{
	int row;
	int col;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
