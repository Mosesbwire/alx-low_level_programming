#include <stdarg.h>

/**
  * sum_them_all - sums all its parameters
  * @n: numbers of params passed in
  * @...: params
  * Return: sum of params
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
