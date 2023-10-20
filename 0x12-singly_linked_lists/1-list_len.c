#include "lists.h"

/**
  * list_len - gets the number of elements in a linked list_t list
  * @h: the pointer to the nodes
  * Return: the number of nodes
  */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
