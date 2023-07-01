#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  *add_node_end - adds a new node at the end of a list_t list
  *@head: pointer to the head of the head of the linked list
  *@str: string to be duplicated
  *Return: address of the new node or NULL on failure
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		list_t *last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
	}
	return (newNode);
}

