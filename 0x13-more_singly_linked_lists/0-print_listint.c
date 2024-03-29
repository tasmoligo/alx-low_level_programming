#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list.
  * @h: pointer to the first node
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	const listint_t *curr_node = h;

	while (curr_node != NULL)
	{
		printf("%d\n", curr_node->n);
		num++;
		curr_node = curr_node->next;
	}

	return (num);
}
