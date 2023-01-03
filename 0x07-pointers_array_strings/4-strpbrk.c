#include <stddef.h>
#include <string.h>
/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: string to search for byte in
  * @accept: bytes to match in s
  *
  * Return: pointer to first occurence of accept in s or NULL if no match
  */

char *_strpbrk(char *s, char *accept)
{
	int len_accept = strlen(accept);
	int len_s = strlen(s);
	int x;
	int y;
	char w;
	char z;
	char *ptr;

	for (x = 0; x < len_s; x++)
	{
		w = *(s + x);

		for (y = 0; y < len_accept; y++)
		{
			z = *(accept + y);

			if (z == w)
			{
				ptr = &*(s + x);
				return (ptr);
			}
		}

		z = *(accept + 0);
	}

	return (NULL);
}
