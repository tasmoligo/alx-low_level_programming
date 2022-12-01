#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a linked list
  * @head: address of new node
  * @n: number of elements
  *
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nNode;
	listint_t *temp;

	nNode = malloc(sizeof(listint_t));
	if (nNode == NULL)
	{
		return (NULL);
	}
	nNode->n = n;
	nNode->next = NULL;
	temp = *head;
	if (*head != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nNode;
	}
	else
	{
		*head = nNode;
	}
	return (*head);
}
