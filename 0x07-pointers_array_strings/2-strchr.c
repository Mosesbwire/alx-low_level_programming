#include <stddef.h>
/**
  * _strchr - looks for occurence of a character in a string
  * @s: string to look for character
  * @c: character to locate
  *
  * Return: pointer to c or null if not found
  */

char *_strchr(char *s, char c)
{
	char *ptr;
	int y = 0;
	char x;

	while (x != '\0')
	{
		x = *(s + y);

		if (x == c)
		{
			ptr = &*(s + y);

			return (ptr);
		}

		y++;
	}

	return (NULL);
}
