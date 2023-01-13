#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints all elements of a list_t list
  * @h: the list to print
  * Return: theb number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t list_elem;

	list_elem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		list_elem++;
	}
	return (list_elem);
}
