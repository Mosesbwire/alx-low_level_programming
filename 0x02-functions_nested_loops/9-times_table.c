#include "main.h"

/**
  *times_table - prints the 9 times table
  *
  *Return: void
  */


void times_table(void)
{
	int x;
	int y;
	int z = 10;

	for (x = 0; x < z; x++)
	{
		for (y = 0; y < z; y++)
		{
			int ans = x * y;

			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (ans >= z)
			{
				int q = ans / 10;
				int r = ans % 10;

				_putchar(q + '0');
				_putchar(r + '0');
			} else
			{
				_putchar(' ');
				_putchar(ans + '0');

			}

		}

		_putchar('\n');
	}
}
