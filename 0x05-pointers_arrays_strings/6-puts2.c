#include <string.h>
#include "main.h"

/**
  * puts2 - print every other character of a string
  * @str: string input to print
  *
  * Return: void
  */

void puts2(char *str)
{
	char *ptr = str;
	int x = 0;
	int length = strlen(str);
	int len = 0;

	while (*(ptr + len) != '\0')
	{
		if (x <= length - 1)
		{
			char c = *(ptr + x);

			_putchar(c);

		}

		x += 2;

		len++;
	}

	_putchar('\n');
}
