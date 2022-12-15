#include "main.h"

/**
  * print_numbers - print numbers from 0 - 9
  *
  * Return - void
  */

void print_numbers(void)
{
	int start;
	int upper_bound = 10;

	for (start = 0; start < upper_bound; start++)
	{
		_putchar(start + '0');
	}

	_putchar('\n');
}
