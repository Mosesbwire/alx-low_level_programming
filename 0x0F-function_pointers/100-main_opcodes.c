#include <stdlib.h>
#include <stdio.h>

/**
  * print - prints opcodes ot the main
  * @a: address of main function
  * @n: number of bytes to print
  * Return: void
  */

void print(char *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%.2hhx", a[x]);

		if (x < n - 1)
		{
			printf(" "); 
		}
	}

	printf("\n");
}

/**
  * main - entry point
  * @argc: count of arguments passed in
  * @argv: array of argument passed in
  * Return: 0 success
  */

int main(int argc, char *argv[])
{
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print((char *)&main, x);

	return (0);
}
