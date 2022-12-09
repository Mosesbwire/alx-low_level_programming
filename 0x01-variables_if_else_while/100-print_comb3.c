#include <stdio.h>

/**
  *main - entry point
  *
  *
  *prints all possible combinations of two digits
  *
  *Return: 0 (success)
  *
  */

int main(void)
{
	int i;
	int j;
	int base10 = 10;

	for (i = 0; i < base10; i++)
	{

		for (j = 0; j < base10; j++)
		{
			if (i != j && i < j)
			{
				if ((i == 0 && j != 1) || i != 0 )
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i + '0');
				putchar(j + '0');

			}

		}
	}

	putchar('\n');

	return (0);
}
