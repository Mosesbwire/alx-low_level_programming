#include <stdio.h>

/**
  * print_to_98 - print natural numbers upto 98
  * @n: print upto parameter n
  *
  * Return: void
  *
  */

void print_to_98(int n)
{
	int bound = 98;
	int start;

	if (n < bound)
	{
		for (start = n; start <= bound; start++)
		{
			if (start != n)
			{
				putchar(',');
				putchar(' ');
				printf("%i", start);
			} else
			{
				printf("%i", start);
			}
		}
	}

	if (n > bound)
	{
		for (start = n; start >= bound; start--)
		{
			if (start != n)
			{
				putchar(',');
				putchar(' ');
				printf("%i", start);
			} else
			{
				printf("%i", start);
			}
		}
	}

	if (n == bound)
	{
		printf("%i", bound);
	}
	putchar('\n');
}
