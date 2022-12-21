#include <string.h>

/**
  * _strcat - concatenates two strings
  *
  * @dest: src string added to its end
  * @src: added to dest
  *
  * Return: pointer to dest
  */

char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	int x;
	int new_dest_len;
	char *ptr = dest;

	for (x = 0; x < src_len; x++)
	{
		*(dest + dest_len) = *(src + x);

		dest_len++;
	}

	new_dest_len = strlen(dest);

	*(dest + new_dest_len) = '\0';

	return (ptr);
}
