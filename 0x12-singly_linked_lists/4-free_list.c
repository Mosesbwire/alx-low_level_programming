#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_list - free's malloc'ed memory
  * @head: points to start of list
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *temporary;

	while((temporary = head) != NULL)
	{
		head = head->next;
		free(temporary->str);
		free(temporary);
	}
}

