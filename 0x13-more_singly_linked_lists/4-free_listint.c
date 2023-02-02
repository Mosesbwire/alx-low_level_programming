#include "lists.h"

/**
  * free_listint - free up memory after use
  * @head: points to start of list
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *temp_node = head;

	while (temp_node != NULL)
	{
		head = head->next;
		free(temp_node);
		temp_node = head;
	}
}
