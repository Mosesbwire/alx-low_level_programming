#include <stdio.h>
#include "lists.h"

/**
  * print_listint - print linked list
  * @h: points to start of list
  * Return: Number of nodes
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp_node = h;
	size_t num_of_nodes = 0;

	if (temp_node == NULL)
	{
		return (num_of_nodes);
	}

	while (temp_node != NULL)
	{
		printf("%d\n", temp_node->n);
		temp_node = temp_node->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
