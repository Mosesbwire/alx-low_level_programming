#include "main.h"
#include <string.h>

/**
  * print_rev - prints a string in reverse
  *
  * @s: string to be reversed
  *
  * Return: void
  *
  */

void print_rev(char *s)
{
	int length;
	int x;

	length = strlen(s);

	for (x = length; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');

}
