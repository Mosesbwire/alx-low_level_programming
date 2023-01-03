/**
  * _memset - fills memory with a constant byte
  *
  * @s: memory area to be filled
  * @b: byte used to fill memory
  * @n: number of memory blocks to fill with @b
  *
  * Return: pointer to @s
  */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int x = 0;

	while (x < n)
	{
		*(s + x) = b;
		x++;
	}

	return (ptr);
}
