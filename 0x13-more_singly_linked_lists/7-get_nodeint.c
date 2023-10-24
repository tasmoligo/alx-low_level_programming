#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a list
  * @head: pointer to the first node
  * @index: index of the node
  * Return: index of the node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *curr = head;

	if (curr == NULL)
	{
		return (NULL);
	}
	while (curr != NULL)
	{
		if (count == index)
		{
			return (curr);
		}
		count++;
		curr = curr->next;
	}
	return (curr);
}
