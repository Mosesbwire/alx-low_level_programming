#include "main.h"

/**
  * print_line - prints a line
  * @n: determines the length of the line
  * Return: void
  */

void print_line(int n)
{
	int x = 0;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	while (x < n)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
