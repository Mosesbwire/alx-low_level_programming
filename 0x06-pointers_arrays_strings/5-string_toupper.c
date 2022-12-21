/**
  * string_toupper - convert string to uppercase
  *
  * @str: string to convert
  *
  * Return: pointer to argument string
  */

char *string_toupper(char *str)
{
	char *ptr = str;
	int x = 0;

	while (*(str + x) != '\0')
	{
		if (*(str + x) >= 'a' && *(str + x) <= 'z')
		{
			*(str + x) = *(str + x) - 32;
		}

		x++;
	}

	return (ptr);
}
