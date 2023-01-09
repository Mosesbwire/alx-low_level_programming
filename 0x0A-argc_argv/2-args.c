#include <stdio.h>

/**
  * main - entry point
  * @argc: count of arguments passed in
  * @argv: array of arguments passed in
  * Return: 0 always (success)
  */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
