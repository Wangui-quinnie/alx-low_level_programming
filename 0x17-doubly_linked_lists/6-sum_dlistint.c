#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *sum_dlistint - returns the sum of all the data of a dlistint_t linked list
  *@head: pointer to the head node of the linked list
  *Return: sum of all the data or 0 if the list is empty
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
