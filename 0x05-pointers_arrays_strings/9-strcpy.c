#include <string.h>

/**
  * _strcpy - copy content from one string to another
  *
  * @dest: argument to get contents
  * @src: argument to copy content from
  * Return: pointer to @dest
  */

char *_strcpy(char *dest, char *src)
{
	int length = strlen(src);
	int x;
	char *ptr_dest = dest;

	for (x = 0; x < length; x++)
	{
		*(dest + x) = *(src + x);
	}

	*(dest + length) = '\0';

	return (ptr_dest);

}
