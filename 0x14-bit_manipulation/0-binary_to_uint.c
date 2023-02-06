#include <ctype.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
  * _pow_base2 - calculate power of x
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
  * binary_to_uint - converts binary to unsigned int
  * @b: binary value
  * Return: decimal value or 0 on fail
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int len = strlen(b);
	int power = len - 1;
	int x;
	char ch;

	if (b == NULL)
	{
		return (0);
	}

	for (x = 0; x < len; x++)
	{
		if (!isdigit(*b))
		{
			return (0);
		}
		ch = *b;
		value += atoi(&ch) * _pow_base2(power);
		power--;
		b++;
	}
	return (value);

}
