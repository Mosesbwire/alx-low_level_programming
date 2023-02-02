#include "lists.h"

/**
  * free_listint2 - free malloc'ed memory
  * @head: pointer to start of list
  * Return: void
  */

void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
