#include "lists.h"

/**
  * get_nodeint_at_index - get nth node
  * @head: points to start of list
  * @index: postion of node
  * Return: pointer to nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_node = head;
	unsigned int idx = 0;

	while (temp_node != NULL)
	{
		if (idx == index)
		{
			return (temp_node);
		}

		idx++;
		temp_node = temp_node->next;
	}

	return (temp_node);
}
