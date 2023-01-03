#include "main.h"
#include <stdio.h>

/**
  * print_chessboard - prints a chess board
  * @a: 2d array representing the chess board
  * Return: void
  */

void print_chessboard(char (*a)[8])
{
	int size = 8;
	int i;
	int j;
	char c;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			c = a[i][j];

			putchar(c);
		}
		putchar('\n');
	}

	putchar('\n');

}
