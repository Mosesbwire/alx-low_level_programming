#include <string.h>

/**
  * _strncpy - copy @n bytes of @src to @dest
  *
  * @n: number of bytes of src to copy
  * @src: parameter to copy from
  * @dest: parameter to copy to
  *
  * Return: pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len = strlen(src);
	char *ptr = dest;
	int x;
	int dest_len = strlen(dest);

	for (x = 0; x < n; x++)
	{
		if (x > src_len)
		{
			*(dest + x) = '\0';
		} else
		{
			*(dest + x) = *(src + x);
		}
	}

	return (ptr);
}
