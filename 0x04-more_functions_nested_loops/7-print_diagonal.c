#include "main.h"

/**
  * print_diagonal - prints diagonal lines on terminal
  * @n: determines length of diagonal line
  *
  * Return: void
  */

void print_diagonal(int n)
{
	int x = 0;
	int y;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	while (x < n)
	{
		y = 0;

		while (y < x)
		{
			_putchar(' ');
			y++;
		}

		_putchar('\\');
		_putchar('\n');
		x++;
	}

}
