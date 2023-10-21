#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list
  * @h: the pointer to the nodes 
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (%s)\n", 0, "nil");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
