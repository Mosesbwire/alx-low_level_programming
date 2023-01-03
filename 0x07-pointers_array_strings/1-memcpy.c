/**
  * _memcpy - copy n bytes from src to dest
  * @dest: memory area to copy to
  * @src: memory area to copy from
  * @n: bytes to copy from src to dest
  *
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}

	return (ptr);
}
