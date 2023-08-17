#include  <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_dnodeint_end - adds a new node at the end of a dlistint_t list
  *@head: pointer to a pointer to the head node of the link
  *@n: the integer value of the new node
  *Return: the adddress of the new node or NULL if if failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
		temp->prev = current;
	}
	return (temp);
}



