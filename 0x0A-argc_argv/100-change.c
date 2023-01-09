#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * @argc: count of arguments
  * @argv: array of arguments passed in
  * Return: 0 (success) or 1 for error
  */

int main(int argc, char *argv[])
{
	int denominations[] = {25, 10, 5, 2, 1};
	int len_denominations = 5;
	int total_coins = 0;
	int x;
	int change;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < len_denominations; x++)
	{
		total_coins += change / denominations[x];

		if (change % denominations[x] == 0)
		{
			printf("%d\n", total_coins);
			return (0);
		}

		change = change % denominations[x];
	}

	return (0);
}
