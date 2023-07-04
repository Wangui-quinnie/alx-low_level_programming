#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint_end - adds a new node at the end of a listint_t list
  *@head: pointer to the pointer to the head of the linked list
  *@n: integer value of the new node
  *Return: address of the new element or NULL on failure
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Newnode, *temp;

	Newnode = malloc(sizeof(listint_t));

	if (Newnode == NULL)
	{
		return (NULL);
	}
	Newnode->n = n;
	Newnode->next = 0;
	if (*head == NULL)
	{
		*head = Newnode;
	}
	else
		temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = Newnode;
	return (Newnode);
}
