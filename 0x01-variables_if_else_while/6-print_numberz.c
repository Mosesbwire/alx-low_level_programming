#include <stdio.h>

/**
  *main - entry point
  *
  *print single digits of base 10 from 0
  *
  *Return: 0 (success)
  *
  */

int main(void)
{
	int start;

	for (start = 0; start < 10; start++)
	{

		putchar(start + '0');

	}

	putchar('\n');

	return (0);
}
