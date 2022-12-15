#include "main.h"
/**
  * more_numbers - prints from 0 - 14
  *
  * Return: void
  */

void more_numbers(void)
{
	int outer_start;
	int inner_start;
	int outer_bound = 11;
	int inner_bound = 15;
	int remainder;

	for (outer_start = 0; outer_start < outer_bound; outer_start++)
	{
		for(inner_start = 0; inner_start < inner_bound; inner_start++)
		{
			if (inner_start > 9)
			{
				_putchar(1 + '0');
			}

			remainder = inner_start % 10;

			_putchar(remainder + '0');
		}

		_putchar('\n');
	}
}
