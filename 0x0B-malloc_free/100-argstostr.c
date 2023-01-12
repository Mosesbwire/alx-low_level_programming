#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * total_char - counts all the characters of the arguments
  * @ac: count of arguments
  * @av: an array of the arguments
  * Return: total count of argument chars
  */
int total_char(int ac, char *av[])
{
	int x, len, total_len;

	len = 0;
	total_len = 0;

	for (x = 0; x < ac; x++)
	{
		len = strlen(av[x]);

		total_len += len;
	}

	total_len += ac;

	return (total_len);
}

/**
  * argstostr - concatenates all the args of the program
  * @ac: count of program args
  * @av: an array of progam arguments
  * Return: pointer to new concatenated string
  */

char *argstostr(int ac, char **av)
{
	int len = total_char(ac, av);
	int x, y, z, wordlen;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	z = 0;

	for (x = 0; x < ac; x++)
	{
		wordlen = strlen(av[x]);
		for (y = 0; y < wordlen; y++)
		{
			str[z] = *(av[x] + y);

			z++;
		}

		if (str[z] == '\0')
		{
			str[z++] = '\n';
		}
	}

	return (str);
}

