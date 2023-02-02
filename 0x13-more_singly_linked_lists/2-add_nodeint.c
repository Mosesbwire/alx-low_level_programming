#include "lists.h"

/**
  * add_nodeint - add node at start of list
  * @head: pointer to start of list
  * @n: data value for node
  * Return: pointer to new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = create_node(n);

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
