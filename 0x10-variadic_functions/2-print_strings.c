#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - prints params strings
  * @separator: separates printed strings
  * @n: number of params passed in
  * @...: params
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", str);
		}

		if (separator != NULL && x + 1 != n)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
