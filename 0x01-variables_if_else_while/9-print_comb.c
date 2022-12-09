#include <stdio.h>

/**
  *main - Entry point
  *
  *print all possible combinations of single-digit numbers
  *
  *Return: 0 (success)
  *
  */

int main(void)
{
	int start = 0;

	while (start < 10)
	{
		putchar(start + '0');

		if (start != 9)
		{
			putchar(',');
			putchar(' ');
		}
		start++;

	}

	putchar('\n');

	return (0);
}
