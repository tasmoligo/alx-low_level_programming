#include "lists.h"

/**
  * reverse_listint - prints a list in reverse
  * @head: pointer to a pointer to a head node
  * Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr_node;
	listint_t *rev_list_node = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		curr_node = (*head)->next;
		(*head)->next = rev_list_node;
		rev_list_node = *head;
		*head = curr_node;
	}
	*head = rev_list_node;
	return (*head);
}
