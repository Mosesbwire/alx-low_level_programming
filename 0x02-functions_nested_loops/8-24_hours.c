#include "main.h"

/**
  * jack_bauer - prints all minutes in a day
  *
  *
  * Return: void
  *
  */

void jack_bauer(void)
{
	const int TOTAL_MIN_DAY = 60 * 24;
	int start;

	for (start = 0; start < TOTAL_MIN_DAY; start++)
	{
		int hour = start / 60;
		int mins = start % 60;

		if (hour < 10)
		{
			_putchar('0');
			_putchar(hour + '0');
		} else
		{
			int hq;
			int hr;

			hq = hour / 10;
			hr = hour % 10;
			_putchar(hq + '0');
			_putchar(hr + '0');
		}
		_putchar(':');
		if (mins < 10)
		{
			_putchar('0');
			_putchar(mins + '0');
		} else
		{
			int q;
			int r;

			q = mins / 10;
			r = mins % 10;
			_putchar(q + '0');
			_putchar(r + '0');
		}

		_putchar('\n');
	}
}

