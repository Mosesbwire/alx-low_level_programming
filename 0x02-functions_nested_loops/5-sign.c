#include "main.h"

/**
  * print_sign - checks if parameter is greater, less or equals 0
  * @n: parameter to be checked
  *
  *prints -, + or 0 to stdout
  *
  *Return: -1, 0 or 1
  */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');

		return (-1);
	} else if (n > 0)
	{
		_putchar('+');

		return (1);
	} else
	{
		_putchar(0 + '0');

		return (0);
	}
}
