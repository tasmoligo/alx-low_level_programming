#include "lists.h"

/**
   * add_nodeint - adds a node at the beginning of list
   * @head: pointer to first node
   * @n: value of node
   * Return: a pointer to the new node
   */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *num;

	if (head == NULL)
	{
		return (NULL);
	}
	num = malloc(sizeof(listint_t));
	if (num == NULL)
	{
		return (NULL);
	}
	num->n = n;
	num->next = *head;
	*head = num;

	return (num);
}
