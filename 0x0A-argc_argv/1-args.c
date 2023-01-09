#include <stdio.h>

/**
  * main - entry point
  * @argc: count of arguments passed in
  * @argv: an array of arguments passed in
  * Return: 0 - always (success)
  */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
