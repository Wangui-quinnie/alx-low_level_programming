#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *insert_nodeint_at_index - inserts a new node at a given position
  *@head: double pointer to the head of the linked list
  *@idx: the index of the list where the new node should be added
  *@n: integer value for the new node
  *Return: the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, Newnode;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	Newnode = malloc(sizeof(listint_t));
	if (Newnode == NULL)
		return (NULL);
	Newnode->n = n;

	temp = *head;
	count = 0;

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL || temp->next == NULL)
	{
		free(Newnode);
		return (NULL);
	}
	Newnode->next = temp->next;
	temp->next = Newnode;
	return (Newnode);
}
