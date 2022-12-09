#include <stdio.h>

/**
  *main - entry point
  *print lowercase alpahbet to stdout
  *
  *Return: 0 (success)
  *
  */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
