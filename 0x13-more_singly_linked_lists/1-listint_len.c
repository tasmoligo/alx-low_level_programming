#include "lists.h"

/**
  * listint_len - returns the number of nodes
  * @h: pointer to the first node
  * Return: the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	if (h == NULL)
	{
		return (num);
	}
	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
