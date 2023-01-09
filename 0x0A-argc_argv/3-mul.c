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
	int answer;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}

	answer = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", answer);

	return (0);
}
