/**
  * leet - encodes a string to 1337(Leet)
  * @str: parameter to encode
  *
  * Return: pointer to @str
  */

char *leet(char *str)
{
	int size = 5;
	char uppercase[] = {'A', 'E', 'O', 'T', 'L'};
	char lowercase[] = {'a', 'e', 'o', 't', 'l'};
	char codes[] = {'4', '3', '0', '7', '1'};
	int x = 0;
	int y;
	char c;
	char *ptr = str;


	while (*(str + x)  != '\0')
	{

		c = *(str + x);

		for (y = 0; y < size; y++)
		{

			if (c == uppercase[y] || c == lowercase[y])
			{
				*(str + x) = codes[y];
			}
		}
		x++;
	}

	return (ptr);
}
