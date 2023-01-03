#include <string.h>
#include <stddef.h>
#include <stdio.h>
/**
  * _strstr - locates a substring in a string
  * @haystack: string to search substring in
  * @needle: substring to locate
  *
  * Return: pointer to start of substring or NULL if no substring
  */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;
	int x;
	int y;
	int z;
	char hay;
	char need;
	int len_hay = strlen(haystack);
	int len_ned = strlen(needle);

	for (x = 0; x < len_hay; x++)
	{
		hay = *(haystack + x);

		z = x;
		need = *(needle + 0);
		y = 0;

		while (hay == need)
		{
			hay = *(haystack + z);
			need = *(needle + y);

			if (y == len_ned)
			{
				ptr = &*(haystack + x);
				return (ptr);
			}

			z++;
			y++;
		}
	}

	return (NULL);
}
