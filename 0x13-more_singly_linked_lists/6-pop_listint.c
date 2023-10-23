#include "lists.h"

/**
  * pop_listint - deletes the head of a node
  * @head: pointer to the pointer to node
  * Return: head node's data
  */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	temp = *head;
	if (temp == NULL)
	{
		return (0);
	}
	*head = temp->next;
	value = temp->n;
	free(temp);

	return (value);
}

