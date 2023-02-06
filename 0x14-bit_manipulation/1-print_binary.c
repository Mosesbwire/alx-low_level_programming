#include "main.h"

/**
  * _pow_base2 - calculates power of int to base2
  * @x: power value
  * Return: integer
  */

int _pow_base2(int x)
{
	int base = 2;
	int value = 1;
	int y;

	if (x == 0)
	{
		return (1);
	}

	for (y = 0; y < x; y++)
	{
		value *= base;
	}
	return (value);
}

/**
  * highest_power - finds the highest power divisible by value
  * @value: value to find its highest power
  * Return: highest power
  */

int highest_power(int value)
{
	int x;

	for (x = 0; _pow_base2(x) < value; x++)
	{}

	if (value - _pow_base2(x) < 0)
	{
		return (x - 1);
	}

	return (x);
}

/**
  * print_binary - prints binary version of n
  * @n: int to print binary version
  * Return: void
  */

void print_binary(unsigned long int n)
{
	int power = highest_power(n);
	int value, check;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (; power >= 0; power--)
	{
		value = _pow_base2(power);
		check = n - value;

		if (check >= 0)
		{
			n -= value;
			_putchar('1');
		} else
		{
			_putchar('0');
		}
	}
}
