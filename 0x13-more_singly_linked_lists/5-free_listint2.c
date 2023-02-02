#include "lists.h"

/**
  * free_listint2 - free malloc'ed memory
  * @head: pointer to start of list
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *temp_node = *head;

	while (temp_node != NULL)
	{
		*head = temp_node->next;
		free(temp_node);
		temp_node = *head;
	}
	*head = NULL;
}
