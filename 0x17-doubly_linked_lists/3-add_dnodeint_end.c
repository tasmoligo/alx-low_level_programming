#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of list
 * @head: pointer to pointer to first node
 * @n: value of node to add
 * Return: pointer to new node, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *dup_h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	dup_h = *head;
	if (dup_h != NULL)
	{
		while (dup_h->next != NULL)
		{
			dup_h = dup_h->next;
		}
		dup_h->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = dup_h;
	return (new);
}
