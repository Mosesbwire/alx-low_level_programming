#include "lists.h"

/**
  * listint_len - count number of nodes in a linked list
  * @h: points to start of list
  * Return: number of nodes in list
  */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp_node = h;
	size_t num_of_nodes = 0;

	if (temp_node == NULL)
	{
		return (num_of_nodes);
	}

	while (temp_node != NULL)
	{
		num_of_nodes++;

		temp_node = temp_node->next;
	}

	return (num_of_nodes);
}
