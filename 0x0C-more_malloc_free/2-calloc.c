#include <stdlib.h>

/**
  * _calloc - allocates initialize memory
  * @nmemb: number of elements to be put in the memory
  * @size: size of each nmemb
  * Return: pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	void *ptr;
	unsigned char *temp_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	temp_ptr = malloc(size * nmemb);

	if (temp_ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < nmemb; x++)
	{
		temp_ptr[x] = 0;
	}
	ptr = temp_ptr;

	return (ptr);

}
