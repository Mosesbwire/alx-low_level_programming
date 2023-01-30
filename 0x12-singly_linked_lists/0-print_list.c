#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints singly linked list
  * @h: points to start of linked list
  * Return: total number of nodes in list
  *
  */

size_t print_list(const list_t *h)
{
	size_t x = 0;
	const list_t *temporary  = h;

	while (temporary != NULL)
	{
		if (temporary->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", temporary->len, temporary->str);
		}

		x++;
		temporary = temporary->next;
	}
	return (x);
}
