#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list
  * @h: the pointer to the nodes
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%u] (%s)\n", h->len, "nil");
		}
		i++;
		h = h->next;
	}
	return (i);
}
