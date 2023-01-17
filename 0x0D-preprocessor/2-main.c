#include "main.h"

/**
  * main - entry point
  * Return: 0 success
  */

int main(void)
{
	char *str;
	int x = 0;

	str = __FILE__;
	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));

		x++;
	}
	_putchar('\n');

	return (0);
}
