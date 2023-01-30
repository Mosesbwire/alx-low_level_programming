#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_node - add node to start of linked list
  * @head: pointer to start of list
  * @str: value to add to struct
  * Return: pointer to added node
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
