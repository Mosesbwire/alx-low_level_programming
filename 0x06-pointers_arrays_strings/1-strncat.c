#include <string.h>

/**
  * _strncat - concatenates two strings
  *
  * @dest: concatenate src to dest
  * @src: add to end of dest
  * @n: bytes to copy from src to dest
  *
  * Return: pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	int new_dest_len;
	char *ptr = dest;
	int x;
	int bytes_to_move = n;

	if (n > src_len)
	{
		bytes_to_move = src_len;
	}

	if (n < 1)
	{
		return (ptr);
	}

	for (x = 0; x < bytes_to_move; x++)
	{
		*(dest + dest_len) = *(src + x);

		dest_len++;
	}

	new_dest_len = strlen(dest);

	*(dest + new_dest_len) = '\0';

	return (ptr);
}
