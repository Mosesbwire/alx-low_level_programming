#include "lists.h"

/**
  * insert_nodeint_at_index - inserts node at nth position
  * @head: pointer to head
  * @n: data value for new node
  * @idx: index to insert node
  * Return: pointer to new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp_node = *head;
	listint_t *new_node = NULL;
	unsigned int index = 0;


	while (temp_node != NULL)
	{
		if (idx == 0)
		{
			return (add_nodeint(head, n));
		}

		if ((idx - index) == 1)
		{

			new_node = create_node(n);

			if (new_node == NULL)
			{
				return (NULL);
			}
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}

		index++;
		temp_node = temp_node->next;
	}

	return (new_node);
}
