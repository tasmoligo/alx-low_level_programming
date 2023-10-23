#include "lists.h"

/**
  * free_listint2 - frees a list
  * @head: pointer to the pointer to first node
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *curr_node;
	listint_t *temp;

	if (*head == NULL || head == NULL)
	{
		return;
	}
	curr_node = *head;
	while (curr_node !=  NULL)
	{
		temp = curr_node;
		curr_node = curr_node->next;
		free(temp);
	}
	*head = NULL;
}
