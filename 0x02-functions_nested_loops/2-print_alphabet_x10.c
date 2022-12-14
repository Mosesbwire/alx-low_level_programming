#include "main.h"

/**
  *print_alphabet_x10 - print lowercase alphabet 10 times
  *
  *Returns: void
  */

void print_alphabet_x10(void)
{
	char a;
	int times = 10;
	int x;

	for (x = 0; x < times; x++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

		_putchar('\n');

	}

}
