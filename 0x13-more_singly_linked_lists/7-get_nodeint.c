#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *get_nodeint_at_index - returns the nth node of a listint_t linked list
  *@index: the index of the node, starting at 0
  *@head: pointer to the head of the linked list
  *Return: the nth node of a listint_t linked list or NULL if the
  *node does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}
