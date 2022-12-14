#include "main.h"

/**
  *print_last_digit - print last digit of argument
  *@n: parameter whose last digit is printed
  *
  *Return: last digit
  *
  */

int print_last_digit(int n)
{
	int last_digit;
	int onesplace = 10;

	last_digit = n % onesplace;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
