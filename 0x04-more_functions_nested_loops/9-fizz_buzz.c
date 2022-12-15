#include <stdio.h>

/**
  * main - entry point
  *
  * fizzbuzz test multiples of 3- fizz, multiples of 5- buzz, of both fizzbuzz
  *
  * Return: 0 always (success)
  */

int main(void)
{
	int start;
	int end = 101;

	for (start = 1; start < end; start++)
	{
		if (start > 1)
		{
			putchar(' ');
		}

		if (start % 3 == 0 && start % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (start % 3 == 0)
		{
			printf("Fizz");
		} else if (start % 5 == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", start);
		}
	}

	putchar('\n');

	return (0);
}
