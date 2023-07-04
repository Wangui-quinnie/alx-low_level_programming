#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint - adds a new node at the beginning of a listint_t list
  *@head: pointer to the pointer to the head of the linked list
  *@n: integer value for the new node
  *Return: address of the new element or NULL on failure
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Newnode;

	Newnode = malloc(sizeof(listint_t));

	if (Newnode == NULL)
	{
		return (NULL);
	}
	Newnode->n = n;
	Newnode->next = *head;
	*head = Newnode;
	return (Newnode);
}
