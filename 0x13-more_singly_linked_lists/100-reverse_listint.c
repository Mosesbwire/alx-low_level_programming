#include "lists.h"
#include <stdio.h>

/**
  * reverse_listint - reverse a linked list
  * @head: pointer to start of list
  * Return: pointer to new start of reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp_node = *head;
	listint_t *prev_node = NULL;

	if (*head == NULL)
	{
		return (*head);
	}

	*head = (*head)->next;

	while (*head != NULL)
	{
		temp_node->next = prev_node;
		prev_node = temp_node;
		temp_node = *head;
		*head = (*head)->next;
	}

	temp_node->next = prev_node;
	*head = temp_node;

	return (*head);
}
