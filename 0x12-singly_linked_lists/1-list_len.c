#include "lists.h"

/**
  *list_len - returns the number of elements in a linked list_t list
  *@h: pointer to the head node of the linked list
  *Return: number of elements in a linked list_t list
  */

size_t list_len(const list_t *h)
{
	size_t list_len = 0;

	while (h)
	{
		list_len++;
		h = h->next;
	}
	return (list_len);
}
