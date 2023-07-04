#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *free_listint - frees a listint_t list
  *@head: pointer to the first node of the linked list
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
