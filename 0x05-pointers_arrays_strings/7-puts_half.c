#include <string.h>
#include "main.h"

/**
  * puts_half - prints last half of a string
  * @str: string to be printed
  *
  * Return: void
  */

void puts_half(char *str)
{
	int length = strlen(str);
	char *ptr = str;
	int n;

	if (length % 2 == 0)
	{
		n = (length -1) / 2;
	} else
	{
		n = (length - 1) / 2;
	}

	while (*(ptr + n) != '\0')
	{
		char c = *(ptr + n);

		_putchar(c);

		n++;
	}

	_putchar('\n');
}
