#include "lists.h"
/**
  * add_nodeint - adds a new node at the beginning of a list
  * @head: the head of the list
  * @n: number of elements
  *
  *Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
