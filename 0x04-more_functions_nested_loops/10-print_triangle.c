#include "main.h"

/**
  * print_triangle - prints triangles
  * @size: size of triangle
  *
  * Return: void
  */

void print_triangle(int size)
{
	int row;
	int col;
	int ctrl;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		ctrl = size - row;

		for (col = 1; col <= size; col++)
		{
			if (col <= ctrl)
			{
				_putchar(' ');
			} else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
