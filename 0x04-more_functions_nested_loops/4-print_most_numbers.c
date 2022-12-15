#include "main.h"

/**
  * print_most_numbers - print from 0 - 9 . Exclude 2 and 4
  *
  * Return: void
  */

void print_most_numbers(void)
{
	int start;
	int upper_bound = 10;

	for (start = 0; start < upper_bound; start++)
	{
		if ((start * 1 != 4 && start * 2 != 4))
		{
			_putchar(start + '0');
		}
	}

	_putchar('\n');
}
