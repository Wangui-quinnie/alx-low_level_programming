#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  *list_len - returns the number of elements in a linked list_t list
  *@h: pointer to the head of the linked list
  *Return: number of elements in the linked list
  */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
