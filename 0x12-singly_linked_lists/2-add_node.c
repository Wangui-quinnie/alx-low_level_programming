#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  *add_node - adds a new node at the beggining of a list_t list
  *@str: the string to be duplicated
  *@head: pointer to the head of the linked list
  *Return: address of the new element or NULL on failure
  */

list_t *add_node(list_t **head, const char *str)
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
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
