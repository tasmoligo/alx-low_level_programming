#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: pointer to first nide
 * @index: index of the node starting at 0
 * Return: the pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (head);
}
