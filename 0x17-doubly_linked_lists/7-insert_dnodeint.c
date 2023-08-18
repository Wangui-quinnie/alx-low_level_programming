#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *insert_dnodeint_at_index - inserts a new node at a given position
  *@h: pointer to the pointer to the head node of the linked list
  *@n: integer value of the new node
  *@idx: index of the list where the new node should be added
  *starts at 0
  *Return: address of the new node or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *current = *h;

	if (current == NULL && idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	current = current->next;
		idx--;
	if (current == NULL && idx > 0)
		return (NULL);
	if (current != NULL)
	{
		temp = malloc(sizeof(dlistint_t));
	}
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = current->prev;
	temp->next = current;
	if (current->prev != NULL)
	{
		current->prev->next = temp;
	}
	else
	{
		return (add_dnodeint_end(h, n));
	}
	return (temp);
}
