#include "lists.h"

/**
  * add_nodeint_end - add new node at end of list
  * @head: pointer to start of list
  * @n: data value for node
  * Return: pointer to new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (temp_node == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}

	temp_node->next = new_node;

	return (new_node);
}
