#include <string.h>
#include <stdlib.h>

/**
  * _strdup - copy's parameter string to new memory space
  * @str: pointer to string to copy to new memory space
  *
  * Return: pointer to new copy of str or NULL
  */

char *_strdup(char *str)
{
	int str_len;
	int x;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	str_len = strlen(str);

	new_str = (char *)malloc((str_len + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (x = 0; x <= str_len; x++)
	{
		new_str[x] = *(str + x);
	}


	return (new_str);

}
