#include <string.h>

/**
  * _strcmp - compares two strings
  * @s1: string to compare against
  * @s2: string to compare
  *
  * Return: zero, positive or negative integer
  */

int _strcmp(char *s1, char *s2)
{
	int length = strlen(s1);
	int x = 0;
	int compvalue;

	compvalue = *(s1 + x) - *(s2 + x);

	if (compvalue != 0)
	{
		return (compvalue);
	}

	for (; x < length; x++)
	{
		compvalue = *(s1 + x) - *(s2 + x);

		if (compvalue != 0)
		{
			break;
		}
	}

	return (compvalue);
}
