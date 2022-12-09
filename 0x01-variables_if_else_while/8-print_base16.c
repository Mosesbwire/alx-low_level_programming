#include <stdio.h>

/**
  *main - entry point
  *
  *print hexadecimal in lowercase
  *
  *Return: 0 (success)
  */

int main(void)
{
	int start = 0;
	int hex_total = 6;
	int hex_start = 0;
	char alpha_start = 'a';

	while (start < 10)
	{
		putchar(start + '0');

		start++;
	}

	while (hex_start < hex_total)
	{
		putchar(alpha_start);

		hex_start++;
		alpha_start++;
	}

	putchar('\n');

	return (0);

}
