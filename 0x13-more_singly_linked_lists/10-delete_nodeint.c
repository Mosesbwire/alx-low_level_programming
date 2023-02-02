#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * delete_nodeint_at_index - delete node at nth index
  * @head: pointer to start of list
  * @index: element to delete
  * Return: 1 on success -1 on failure
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = *head;
	listint_t *deleted_node;
	unsigned int idx = 0;
	int ret_val = -1;

	if (index == 0 && temp_node != NULL)
	{
		*head = temp_node->next;
		free(temp_node);
		return (1);
	}

	while (temp_node != NULL)
	{
		if (index - idx == 1)
		{
			deleted_node = temp_node->next;
			temp_node->next = temp_node->next->next;
			deleted_node->next = NULL;
			free(deleted_node);
			return (1);
		}

		idx++;
		temp_node = temp_node->next;
	}

	return (ret_val);


}
