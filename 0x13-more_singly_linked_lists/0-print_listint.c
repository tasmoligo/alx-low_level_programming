#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * print_listint - prints the elements of a linked list
  * @h: head of list
  *
  * Return: size of linked list
  */
size_t print_listint(const listint_t *h)
{
	size_t temp = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		temp++;
	}
	return (temp);
}
