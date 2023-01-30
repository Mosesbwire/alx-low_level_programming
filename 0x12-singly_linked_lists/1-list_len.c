#include "lists.h"
/**
  * list_len - count number of elements in a linked list
  * @h: points to start of list
  * Return: number of elements in list
  */

size_t list_len(const list_t *h)
{
	size_t x = 0;
	const list_t *temporary = h;

	while (temporary != NULL)
	{
		x++;
		temporary = temporary->next;
	}

	return (x);
}
