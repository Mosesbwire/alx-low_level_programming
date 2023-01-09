#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * @argc: count of arguments passed in
  * @argv: array of arguments passed in
  * Return: 0 (success) or 1 (error)
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	int x;
	int z;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		z = atoi(argv[x]);

		if (z == 0 && *(argv[x]) != 48)
		{
			printf("Error\n");
			return (1);
		}

		if (z < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += z;
	}

	printf("%d\n", sum);

	return (0);
}
