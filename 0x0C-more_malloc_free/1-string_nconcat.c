#include <string.h>
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: string one
  * @s2: string two
  * @n: bytes to concatenate from s2 to s1
  * Return: pointer to allocated memory or NULL on failure
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int mem_allocation;
	int len_s1, len_s2, x, y;
	char *new_str;

	if (n >= strlen(s2))
	{
		len_s2 = strlen(s2);
	} else
	{
		len_s2 = n;
	}

	len_s1 = strlen(s1);
	mem_allocation = len_s1 + len_s2;
	new_str = malloc(sizeof(char) * mem_allocation + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}

	x = 0;
	y = 0;

	while (x < mem_allocation)
	{
		if (x < len_s1)
		{
			new_str[x] = *(s1 + x);
		} else
		{
			new_str[x] = *(s2 + y);
			y++;
		}

		x++;
	}
	x++;
	new_str[x] = '\0';

	return (new_str);
}
