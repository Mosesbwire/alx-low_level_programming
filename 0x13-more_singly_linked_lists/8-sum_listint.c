#include "lists.h"

/**
  * sum_listint - sums up data in linked list
  * @head: point to start of list
  * Return: sum of data
  *
  */

int sum_listint(listint_t *head)
{
	listint_t *temp_node = head;
	int sum = 0;

	while (temp_node != NULL)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}

	return (sum);
}
