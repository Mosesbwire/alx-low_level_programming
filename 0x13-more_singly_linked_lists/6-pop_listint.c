#include "lists.h"

/**
  * pop_listint - removes first node of list
  * @head: pointer to head of list
  * Return: data from removed node
  */

int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	*head = (*head)->next;

	free(node);

	return (data);
}
