#include <stdlib.h>
#include <string.h>

/**
  * str_concat - concatenates two strings
  * @s1: parameter one
  * @s2: parameter two
  * Return: pointer to concatenated string otherwise NULL
  */

char *str_concat(char *s1, char *s2)
{
	int new_length, x, y;
	char *new_str;
	char c = ' ';

	if (s1 == NULL)
	{
		*(s1 + 0) = c;
	}

	if (s2 == NULL)
	{
		*(s2 + 0) = c;
	}

	new_length = strlen(s1) + strlen(s2) + 1;

	new_str = (char *)malloc(new_length * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	y = 0;
	for (x = 0; x <= new_length; x++)
	{
		if (x < (int)strlen(s1))
		{
			new_str[x] = *(s1 + x);
		}

		if (x >= (int)strlen(s1))
		{
			new_str[x] = *(s2 + y);
			y++;
		}
	}

	return (new_str);

}
