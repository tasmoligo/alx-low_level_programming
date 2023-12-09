#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of list
 * @head: pointer to first node
 * @n: value to add
 * Return: address of new element, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *dup_h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	dup_h = *head;
	if (dup_h != NULL)
	{
		while (dup_h->prev != NULL)
		{
			dup_h = dup_h->prev;
		}
	}
	new->next = dup_h;
	if (dup_h != NULL)
	{
		dup_h->prev = new;
	}
	*head = new;
	return (new);
}
