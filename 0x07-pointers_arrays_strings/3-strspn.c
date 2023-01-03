
/**
  * _strspn - gets the length of a prefix substring
  * @s: string to count the bytes of the substring
  * @accept: string to check for occurence in substring
  *
  * Return: number of bytes that consist of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int w = 0;
	int x;
	char y;
	char z;
	unsigned int results = 0;

	while (y != '\0')
	{
		y = *(accept + w);
		x = 0;

		while (z != ' ')
		{
			z = *(s + x);

			if (z == y)
			{
				results++;
			}
			x++;
		}

		z = *(s + 0);
		w++;
	}

	return (results);
}
