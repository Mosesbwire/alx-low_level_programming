#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
  * main - entry point
  * @argc: number of arguments passed in
  * @argv: array of argument passed in
  * Return: 0 for success
  */

int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int answer, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	answer = ptr(a, b);

	printf("%d\n", answer);

	return (0);
}
