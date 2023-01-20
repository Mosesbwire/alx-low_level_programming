#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - prints its args
  * @separator: separates numbers
  * @n: numbers of arguments passed in
  * @...: params
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		if (separator != NULL && x + 1 != n)
		{
			printf("%d%s", va_arg(args, int), separator);
		} else
		{
			printf("%d", va_arg(args, int));
		}
	}

	printf("\n");

	va_end(args);
}
