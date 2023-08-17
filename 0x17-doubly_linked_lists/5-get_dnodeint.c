#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
  *@head: pointer to the head node of the linked list
  *@index: index of the node starting from 0
  *Return: the nth node of the list or NULL if it doesnt exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	if (index == 0)
	{
		return (current);
	}
	return (NULL);
}
