#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
  * add_node_end - add node to end of linked list
  * @head: points to start of list
  * @str: string value for struct
  * Return: pointer to added node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temporary = *head;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (temporary == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temporary->next != NULL)
	{
		temporary = temporary->next;
	}
	temporary->next = newnode;
	return (newnode);
}
