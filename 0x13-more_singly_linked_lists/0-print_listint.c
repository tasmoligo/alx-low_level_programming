#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list.
  * @h: pointer to the first node
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int num = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
