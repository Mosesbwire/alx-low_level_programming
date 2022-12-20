#include <string.h>

/**
  * rev_string - reverses given string
  * @s: string to be reversed
  *
  * Return: void
  */

void rev_string(char *s)
{
	int x;
	char tempChar;
	int length = strlen(s);
	int loopVar = length / 2;
	char *ptr = s;
	int lastPos = length - 1;

	for (x = 0; x < loopVar; x++)
	{
		tempChar = *(ptr + lastPos);
		*(ptr + lastPos) = *(ptr + x);
		*(ptr + x) = tempChar;

		lastPos--;
	}
}
